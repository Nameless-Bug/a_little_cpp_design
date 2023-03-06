#include <iostream>
#include <type_traits>

int main(){

    std::cout << std::is_same_v<int, const int> << std::endl;
    std::cout << std::is_same_v<int, volatile int> << std::endl;
    std::cout << std::is_same_v<int, const volatile int> << std::endl;

    std::cout << std::is_same_v<int, std::remove_cv_t<const int>> << std::endl;
    std::cout << std::is_same_v<int, std::remove_cv_t<volatile int>> << std::endl;
    std::cout << std::is_same_v<int, std::remove_cv_t<const volatile int>> << std::endl;

    return 0;
}