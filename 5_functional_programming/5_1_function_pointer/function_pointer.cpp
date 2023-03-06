#include <iostream>

using FuncPtr = int (*) (const int&, const int&);

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

int calculator(const int& x, const int& y, FuncPtr fp){
    return fp(x, y);
}

int main(){
    int x = 4;
    int y = 2;

    int res1 = calculator(x, y, add);
    std::cout << res1 << std::endl;

    int res2 = calculator(x, y, sub);
    std::cout << res2 << std::endl;

    int res3 = calculator(x, y, mul);
    std::cout << res3 << std::endl;

    int res4 = calculator(x, y, divide);
    std::cout << res4 << std::endl;

    return 0;
}