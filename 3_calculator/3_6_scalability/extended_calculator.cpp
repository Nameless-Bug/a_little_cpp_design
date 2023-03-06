#include <limits.h>
#include <cmath>

#include "extended_calculator.hpp"

int error_code = 0;

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

int divider(const int& x, const int& y){
    int res = x / y;
    return res;
}

int power(const int& x, const int& y){
    int res = std::pow(x, y);
    return res;
}

int calculator(const int& x, const int& y, OP op){
    int res;
    switch (op){
    case ADD:
        res = adder(x, y);
        break;
    case SUB:
        res = subtractor(x, y);
        break;
    case MUL:
        res = multiplier(x, y);
        break;
    case DIV:
        if (y == 0){
            error_code = 1;
            res = INT_MIN;
        } else {
            res = divider(x, y);
        }
        break;
    case POW:
        res = power(x, y);
        break;
    default:
        error_code = 2;
        res = INT_MIN;
    }
    return res;
}
