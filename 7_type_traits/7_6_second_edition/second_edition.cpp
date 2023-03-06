#include <iostream>
#include <type_traits>

template<class T>
std::enable_if_t<std::is_integral_v<T> || std::is_floating_point_v<T>, T> adder(T& t1, T& t2){
    return t1 + t2;
}

int main(){
    int x = 4;
    int y = 2;
    auto res1 = adder<int>(x, y);
    std::cout << res1 << std::endl;

    double a = 1.0;
    double b = 2.0;
    auto res2 = adder<double>(a, b);
    std::cout << res2 << std::endl;
    
    return 0;
}