#include <iostream>
#include <type_traits>

// will generate empty function for type which is not satisfied with the condition in constexpr if due to SFINAE
template<class T>
T adder(T& t1, T& t2){
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
    // Person res = adder<Person>(p1, p2);      // will not generate compile time error even if Person does not overloads operator+

    return 0;
}