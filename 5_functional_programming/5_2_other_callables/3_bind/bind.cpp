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

int main(){
    int x = 4;
    int y = 2;

    auto adder = std::bind(add, std::placeholders::_1, std::placeholders::_2);
    auto res1 = adder(x, y);
    std::cout << res1 << std::endl;

    auto subtractor = std::bind(sub, std::placeholders::_1, std::placeholders::_2);
    auto res2 = subtractor(x, y);
    std::cout << res2 << std::endl;

    auto multiplier = std::bind(mul, std::placeholders::_1, std::placeholders::_2);
    auto res3 = multiplier(x, y);
    std::cout << res3 << std::endl;

    auto divider = std::bind(divide, std::placeholders::_1, std::placeholders::_2);
    auto res4 = divider(x, y);
    std::cout << res4 << std::endl;

    return 0;
}