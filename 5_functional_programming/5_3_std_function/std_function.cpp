#include <iostream>
#include <functional>

// function pointer
using FuncPtr = int (*) (int, int);

int add(const int& x, const int& y){
    return x + y;
}

// function object
class Subtractor{
public:
    int operator()(const int& x, const int& y){
        return x - y;
    }
};

// lambda
auto mul = [](const int& x, const int& y){return x * y;};

// std::bind
int divide(const int& x, const int& y){
    return x / y;
}

auto divider = std::bind(divide, std::placeholders::_1, std::placeholders::_2);

// calculator
int calculator(const int& x, const int& y, const std::function<int(int, int)>& func){
    return func(x, y);
}


int main(){
    int x = 4;
    int y = 2;

    int res1 = calculator(x, y, add);           // call by function pointer
    std::cout << res1 << std::endl;

    int res2 = calculator(x, y, Subtractor());  // call by function object
    std::cout << res2 << std::endl;

    int res3 = calculator(x, y, mul);           // call by lambda
    std::cout << res3 << std::endl;

    int res4 = calculator(x, y, divider);       // call by std::bind object
    std::cout << res4 << std::endl;

    return 0;
} 