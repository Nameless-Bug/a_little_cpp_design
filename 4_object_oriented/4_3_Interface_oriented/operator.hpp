#pragma once

class Operator{
public:
    virtual int op(const int& x, const int& y) = 0;

    virtual ~Operator(){};
};