#include <unordered_map>
#include <cmath>

#include "map_calculator.hpp"

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

using Operator = int (*) (const int&, const int&);

const std::unordered_map<OP, Operator> operator_map{
    {ADD, adder},
    {SUB, subtractor},
    {MUL, multiplier},
    {DIV, divider},
    {POW, power}
};

int calculator(const int& x, const int& y, OP op){
    int res = operator_map.at(op)(x, y);
    return res;
}
