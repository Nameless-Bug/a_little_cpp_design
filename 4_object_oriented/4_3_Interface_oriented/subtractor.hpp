#include "operator.hpp"

class Subtractor : public Operator{
public:
    int op(const int& x, const int& y) override {
        return x - y;
    } 
};