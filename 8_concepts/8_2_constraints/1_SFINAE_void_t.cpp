#include<iostream>
#include<type_traits>

template<class T, class = void>
struct has_member : std::false_type{};

template<class T>
struct has_member<T, std::void_t<typename T::A_member>> : std::true_type{};


template<class...>
using int_t = int;

template<class T, class = int>
struct has_member_func : std::false_type{};

template<class T>
struct has_member_func<T, int_t<decltype(std::declval<T>().sub())>> : std::true_type{};

template<class T>
constexpr bool has_member_func_v = has_member_func<T>::value;


template<class T, class = int>
struct has_static_func : std::false_type{};

template<class T>
struct has_static_func<T, int_t<decltype(T::add(std::declval<int>()))>> : std::true_type{};

template<class T>
constexpr bool has_static_func_v = has_static_func<T>::value;


template<class T>
typename std::enable_if<has_member_func<T>::value, decltype(std::declval<T>().sub())>
member_func_executor(T& t){
    t.sub();
}

template<class T>
using copy_assignment_t = decltype(std::declval<T&>() = std::declval<T const&>());

class A{};

class B{
public:
    using A_member = A;
    B(int x) : n(x){};

    void sub(){
        n--;
    }

    static int add(int x){
        return x++;
    }

    int n;
    A_member a_in_b_;
};

int main(){
    std::cout << has_member<A>::value << std::endl; // 0
    std::cout << has_member<B>::value << std::endl; // 1

    std::cout << has_static_func<B>::value << std::endl;    // 1
    std::cout << has_member_func_v<B> << std::endl;         // 1
    std::cout << "---------------------------" << std::endl;

    B b(5);
    member_func_executor<B>(b);
    std::cout << b.n << std::endl;  // 4
    
    copy_assignment_t<B> bb = b;
    std::cout << bb.n << std::endl;  // 4

    return 0;
}