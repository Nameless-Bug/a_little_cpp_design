#include <iostream>

#include "calculator_with_error_code.hpp"


int main(){
    int res = calculator(4, 2, DIV);
    if (error_code != 0){
        // do error handling here
    } else {
        std::cout << res << std::endl;
    }
    return 0;
}