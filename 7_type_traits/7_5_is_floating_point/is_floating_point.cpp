#include <iostream>
#include <type_traits>

int main(){
    
    std::cout << std::is_integral_v<int> << std::endl;
    std::cout << std::is_integral_v<float> << std::endl;

    std::cout << std::is_floating_point_v<float> << std::endl;
    std::cout << std::is_floating_point_v<double> << std::endl;
    std::cout << std::is_floating_point_v<uint64_t> << std::endl;
    
    return 0;
}