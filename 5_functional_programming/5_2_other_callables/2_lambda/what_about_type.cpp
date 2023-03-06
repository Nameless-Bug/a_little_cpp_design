#include <iostream>

auto add = [](const int& x, const int& y){return x + y;};
auto sub = [](const int& x, const int& y){return x - y;};
auto mul = [](const int& x, const int& y){return x * y;};
auto divider = [](const int& x, const int& y){return x / y;};

template<class T>
int calculator(const int& x, const int& y, T& t){
    return t(x, y);
}

int main(){
    int x = 4;
    int y = 2;

    auto res1 = calculator(x, y, add);
    std::cout << res1 << std::endl;

    auto res2 = calculator<decltype(sub)>(x, y, sub);
    std::cout << res2 << std::endl;

    auto res3 = calculator(x, y, mul);
    std::cout << res3 << std::endl;

    auto res4 = calculator<decltype(divider)>(x, y, divider);
    std::cout << res4 << std::endl;
    return 0;
}