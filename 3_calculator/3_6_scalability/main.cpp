#include <iostream>

#include "extended_calculator.hpp"


int main(){
    int res = calculator(2, 3, POW);
    if (error_code != 0){
        // do error handling here
    } else {
        std::cout << res << std::endl;
    }
    return 0;
}
