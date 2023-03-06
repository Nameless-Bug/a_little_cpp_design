#include <iostream>

int add_int(const int& x, const int& y){
    return x + y;
}

double add_double(const double& x, const double& y){
    return x + y;
}

uint64_t add_uint64(const uint64_t& x, const uint64_t& y){
    return x + y;
}

int main(){
    int res1 = add_int(1, 2);
    std::cout << res1 << std::endl;

    double res2 = add_double(1.1, 2.2);
    std::cout << res2 << std::endl;

    int res3 = add_uint64(11, 22);
    std::cout << res3 << std::endl;
    return 0;
}