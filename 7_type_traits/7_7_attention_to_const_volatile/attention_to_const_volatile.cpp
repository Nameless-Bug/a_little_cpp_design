#include <iostream>
#include <type_traits>

template<class T>
std::enable_if_t<std::is_integral_v<T> || std::is_floating_point_v<T>, T> adder(T& t1, T& t2){
    return t1 + t2;
}

int main(){
    // const int x = 4;
    // const int y = 2;
    // auto res1 = adder<int>(x, y);
    // std::cout << res1 << std::endl;

    // volatile double a = 1.0;
    // volatile double b = 2.0;
    // auto res2 = adder<double>(a, b);
    // std::cout << res2 << std::endl;

    // const volatile float m = 1.1;
    // const volatile float n = 2.2;
    // auto res3 = adder<float>(m, n);
    // std::cout << res3 << std::endl;
    
    return 0;
}