#include <iostream>
#include <memory>

#include "adder.hpp"
#include "subtractor.hpp"
#include "multiplier.hpp"
#include "divider.hpp"
#include "power.hpp"


int calculator(const int& x, const int& y, std::shared_ptr<Operator> o_ptr){
    return o_ptr->op(x, y);
}

int main(){
    std::shared_ptr<Operator> a = std::make_shared<Adder>();
    std::shared_ptr<Operator> s = std::make_shared<Subtractor>();
    std::shared_ptr<Operator> m = std::make_shared<Multiplier>();
    std::shared_ptr<Operator> d = std::make_shared<Divider>();
    std::shared_ptr<Operator> p = std::make_shared<Power>();

    int x = 4;
    int y = 2;

    int res = calculator(x, y, p);
    std::cout << res << std::endl;

    return 0;
}