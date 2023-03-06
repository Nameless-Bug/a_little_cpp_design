#include <iostream>
#include <type_traits>

class Person {
public:
    Person operator+(const Person& person){
        Person new_person = Person();
        return new_person;
    }
};

template<class T>
std::enable_if_t<std::is_integral_v<T> || std::is_floating_point_v<T> || std::is_same_v<Person, T>, T> add1(T& t1, T& t2){
    return t1 + t2;
}

template<class T>
auto add2(T& t1, T& t2){
    if constexpr (std::is_integral_v<T> || std::is_floating_point_v<T> || std::is_same_v<Person, T>){
        return t1 + t2;
    }
}

int main(){
    Person p1 = Person();
    Person p2 = Person();
    auto res1 = add1<Person>(p1, p2);
    auto res2 = add2<Person>(p1, p2);
    
    return 0;
}

// class A {
// public:
//     A operator+(const A& a){
//         A new_a = A();
//         return new_a;
//     }
// };

// class B {
// public:
//     B operator+(const B& b){
//         B new_b = B();
//         return new_b;
//     }
// };
