#include<iostream>
#include<type_traits>
#include<concepts>


template<class T>
concept Number = std::is_integral_v<T> || std::is_floating_point_v<T>;

template<class F, class M, class N>
concept calculate_callable = requires(F&& f, M m, N n){
    {std::forward<F>(f)(m, n)};
};

template<class F, class M, class N> requires calculate_callable<F, M, N> && Number<M> && Number<N>
auto calculator(M m, N n, F&& func){
    return std::forward<F>(func)(m, n);
}

auto add = [](double& x, double& y){ return x + y; };

int main(){

    auto m = 1.1;
    auto n = 2.2;
    auto res1 = calculator(m, n, add);
    auto res2 = calculator(3, 0.9, [](Number auto& x, Number auto& y){ return x - y; });
    std::cout << res1 << std::endl;  
    std::cout << res2 << std::endl;  

    return 0;
}