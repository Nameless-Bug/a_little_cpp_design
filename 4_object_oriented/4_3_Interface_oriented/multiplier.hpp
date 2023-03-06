#include "operator.hpp"

class Multiplier : public Operator{
public:
    int op(const int& x, const int& y) override {
        return x * y;
    } 
};