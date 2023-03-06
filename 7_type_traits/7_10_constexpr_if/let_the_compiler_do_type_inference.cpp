#include <iostream>
#include <type_traits>

// use auto to let the compiler inference the return type
template<class T>
auto adder(T& t1, T& t2){
    if constexpr(std::is_integral_v<T> || std::is_floating_point_v<T>) {
        return t1 + t2;
    }
}

class Person{};

int main(){
    int x = 4;
    int y = 2;
    auto res1 = adder<int>(x, y);
    std::cout << res1 << std::endl;

    // Person p1 = Person();
    // Person p2 = Person();
    // auto res = adder<Person>(p1, p2);      // compile time error

    return 0;
}