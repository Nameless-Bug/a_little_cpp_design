#include <iostream>

int adder(const int& x, const int& y){
    int res = x + y;
    return res;
}

int main(){
    int res = adder(1, 2);
    std::cout << res << std::endl;
    return 0;
}