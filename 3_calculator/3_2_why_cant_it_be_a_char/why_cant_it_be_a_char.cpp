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

int calculator(const int& x, const int& y, char op){
    int res;
    if (op == 'a') {
        res = adder(x, y);
    } else if (op == 'b') {
        res = subtractor(x, y);
    } else if (op == 'c') {
        res = multiplier(x, y);
    } else if (op == 'd') {
        res = divider(x, y);
    }
    return res;
}

int main(){
    int res1 = calculator(1, 2, 'a');
    std::cout << res1 << std::endl;

    int res2 = calculator(1, 2, 'c');
    std::cout << res2 << std::endl;

    return 0;
}