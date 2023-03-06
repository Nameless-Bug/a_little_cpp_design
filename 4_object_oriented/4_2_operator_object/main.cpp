#include <iostream>

#include "adder.hpp"
#include "subtractor.hpp"
#include "multiplier.hpp"
#include "divider.hpp"

int adder(const int& x, const int& y, Adder& a){
    return a.add(x, y);
}

int subtractor(const int& x, const int& y, Subtractor& s){
    return s.sub(x, y);
}

int multiplier(const int& x, const int& y, Multiplier& m){
    return m.mul(x, y);
}

int divider(const int& x, const int& y, Divider& d){
    return d.div(x, y);
}

// int calculator(const int& x, const int& y, ???);

int main(){
    Adder a = Adder();
    Subtractor s = Subtractor();
    Multiplier m = Multiplier();
    Divider d = Divider();

    int x = 4;
    int y = 2;

    int res1 = adder(x, y, a);
    std::cout << res1 << std::endl;

    int res2 = subtractor(x, y, s);
    std::cout << res2 << std::endl;

    int res3 = multiplier(x, y, m);
    std::cout << res3 << std::endl;

    int res4 = divider(x, y, d);
    std::cout << res4 << std::endl;

    return 0;
}