#include <iostream>

#include "calculator.hpp"


int main(){
    int res = calculator<POW>(2, 3);
    std::cout << res << std::endl;
    return 0;
}