#include <iostream>
#include <functional>

int add(const int& x, const int& y){
    return x + y;
}

int sub(const int& x, const int& y){
    return x - y;
}

int mul(const int& x, const int& y){
    return x * y;
}

int divide(const int& x, const int& y){
    return x / y;
}

template<class T>
int calculator(const int& x, const int& y, T& t){
    return t(x, y);
}

int main(){
    int x = 4;
    int y = 2;

    auto adder = std::bind(add, std::placeholders::_1, std::placeholders::_2);
    auto subtractor = std::bind(sub, std::placeholders::_1, std::placeholders::_2);
    auto multiplier = std::bind(mul, std::placeholders::_1, std::placeholders::_2);
    auto divider = std::bind(divide, std::placeholders::_1, std::placeholders::_2);

    auto res1 = calculator(x, y, adder);
    std::cout << res1 << std::endl;

    auto res2 = calculator<decltype(subtractor)>(x, y, subtractor);
    std::cout << res2 << std::endl;

    auto res3 = calculator(x, y, multiplier);
    std::cout << res3 << std::endl;

    auto res4 = calculator<decltype(divider)>(x, y, divider);
    std::cout << res4 << std::endl;

    return 0;
}