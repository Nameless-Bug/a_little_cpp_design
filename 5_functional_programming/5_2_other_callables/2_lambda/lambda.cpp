#include <iostream>

auto add = [](const int& x, const int& y){return x + y;};
auto sub = [](const int& x, const int& y){return x - y;};
auto mul = [](const int& x, const int& y){return x * y;};
auto divider = [](const int& x, const int& y){return x / y;};

int main(){
    int x = 4;
    int y = 2;

    auto res1 = add(x, y);
    std::cout << res1 << std::endl;

    auto res2 = sub(x, y);
    std::cout << res2 << std::endl;

    auto res3 = mul(x, y);
    std::cout << res3 << std::endl;

    auto res4 = divider(x, y);
    std::cout << res4 << std::endl;
    return 0;
}