#include <iostream>

int add(const int& x, const int& y){
    return x + y;
}

double add(const double& x, const double& y){
    return x + y;
}

int main(){
    int res1 = add(1, 2);
    std::cout << res1 << std::endl;

    double res2 = add(1.1, 2.2);
    std::cout << res2 << std::endl;

    return 0;
}