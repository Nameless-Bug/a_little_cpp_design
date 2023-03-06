#include<iostream>
#include<type_traits>
#include<concepts>

template<typename T>
concept Addable = requires (T& a){
    a + a;
};

class Person{
public:
    Person operator+(const Person& p){
        std::cout << &p << std::endl;
        return Person();
    }
};

template<class T> requires Addable<T>
auto adder(T& t1, T& t2){
    return t1 + t2;
}

int main(){
    int a = 1;
    int b = 2;
    auto res1 = adder<int>(a, b);
    std::cout << res1 << std::endl;

    auto m = 1.1;
    auto n = 2.2;
    auto res2 = adder<decltype(m)>(m, n);
    std::cout << res2 << std::endl;  

    Person p1 = Person();
    Person p2 = Person();
    auto res = adder<Person>(p1, p2);
    std::cout << &res << std::endl;
    return 0;
}