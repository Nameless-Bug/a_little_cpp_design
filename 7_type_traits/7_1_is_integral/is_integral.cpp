#include <iostream>
#include <type_traits>

class Person{};

int main(){
    
    std::cout << std::is_integral_v<int> << std::endl;
    std::cout << std::is_integral_v<int32_t> << std::endl;
    std::cout << std::is_integral_v<uint64_t> << std::endl;
    std::cout << std::is_integral_v<Person> << std::endl;
    return 0;
}