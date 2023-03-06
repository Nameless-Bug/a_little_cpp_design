#include <iostream>

#include "adder.hpp"

int adder(const int& x, const int& y, Adder& a){
    return a.add(x ,y);
}

int main(){
    Adder a = Adder();

    int x = 2;
    int y = 3;

    int res1 = a.add(x, y);
    std::cout << res1 <<std::endl;

    int res2 = adder(x, y, a);
    std::cout << res2 <<std::endl;
    return 0;
}