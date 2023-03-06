#include <cmath>

enum OP {
    ADD,
    SUB,
    MUL,
    DIV,
    POW
};

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

template<OP op>
int calculator(const int& x, const int& y){
    if constexpr (op == ADD) {
        return adder(x, y);
    } else if constexpr (op == SUB) {
        return subtractor(x, y);
    } else if constexpr (op == MUL) {
        return multiplier(x, y);
    } else if constexpr (op == DIV) {
        return divider(x, y);
    } else {
        return power(x, y);
    }
}