#include <iostream>
#include <type_traits>

class Person{};

int main(){
    std::enable_if_t<std::is_integral_v<int>, int> a = 1;                   // int a = 1;
    std::cout << a << std::endl;

    std::enable_if_t<std::is_integral_v<uint64_t>, Person> p = Person();    // Person p = Person();
    std::cout << &p << std::endl;

    // std::enable_if_t<std::is_integral_v<Person>, int32_t> b = 1024;         // compile time error
    // std::cout << b << std::endl;
    return 0;
}