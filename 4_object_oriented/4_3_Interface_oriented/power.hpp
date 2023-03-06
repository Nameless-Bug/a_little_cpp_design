#include <cmath>

#include "operator.hpp"

class Power : public Operator{
public:
    int op(const int& x, const int& y) override {
        return std::pow(x, y);
    } 
};