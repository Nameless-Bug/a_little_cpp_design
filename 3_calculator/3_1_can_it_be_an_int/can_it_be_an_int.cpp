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

int calculator(const int& x, const int& y, int op){
    int res;
    if (op == 1) {
        res = adder(x, y);
    } else if (op == 2) {
        res = subtractor(x, y);
    } else if (op == 3) {
        res = multiplier(x, y);
    } else if (op == 4) {
        res = divider(x, y);
    }
    return res;
}

int main(){
    int res1 = calculator(1, 2, 1);
    std::cout << res1 << std::endl;

    int res2 = calculator(1, 2, 3);
    std::cout << res2 << std::endl;

    return 0;
}