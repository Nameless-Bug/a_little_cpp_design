#include <iostream>
#include <limits.h>

#include "calculator.hpp"

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
        res = divider(x, y);
        break;
    // How to deal with default case?
    // default:
    //     res = INT_MIN;
    }
    return res;
}
