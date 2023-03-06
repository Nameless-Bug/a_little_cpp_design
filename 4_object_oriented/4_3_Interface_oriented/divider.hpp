#include "operator.hpp"

class Divider : public Operator{
public:
    int op(const int& x, const int& y) override {
        return x / y;
    } 
};