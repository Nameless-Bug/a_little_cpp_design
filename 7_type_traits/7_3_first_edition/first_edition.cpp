#include <iostream>
#include <type_traits>

template<class T>
std::enable_if_t<std::is_integral_v<T>, T> adder(T& t1, T& t2){
    return t1 + t2;
}

class Person{};

int main(){
    int x = 4;
    int y = 2;
    auto res = adder<int>(x, y);
    std::cout << res << std::endl;

    // Person p1 = Person();
    // Person p2 = Person();
    // auto p = adder<Person>(p1, p2); // compile time error: no matching function for call
    
    return 0;
}