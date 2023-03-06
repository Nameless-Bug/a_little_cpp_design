#include "operator.hpp"

class Adder : public Operator{
public:
    int op(const int& x, const int& y) override {
        return x + y;
    } 
};