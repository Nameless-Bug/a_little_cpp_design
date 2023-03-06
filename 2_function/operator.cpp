#include <iostream>

int adder(const int& x, const int& y){
    int res = x + y;
    return res;
}

int subtractor(const int& x, const int& y){
    int res = x - y;
    return res;
}

int multiplier(const int& x, const int& y){
    int res = x * y;
    return res;
}

// In order to focus on program design, precision and exception handling are not considered here
int divider(const int& x, const int& y){
    int res = x / y;
    return res;
}

int main(){
    int res1 = adder(1, 2);
    std::cout << res1 << std::endl;

    int res2 = subtractor(3, 2);
    std::cout << res2 << std::endl;

    int res3 = multiplier(1, 2);
    std::cout << res3 << std::endl;

    int res4 = divider(4, 2);
    std::cout << res4 << std::endl;

    return 0;
}