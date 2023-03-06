#include <iostream>
#include <type_traits>
#include <concepts>

// template<class T>
// std::enable_if_t<std::is_integral_v<T>, T> add_int_enable_if(T& t1, T& t2){
//     return t1 + t2;
// }

// template<class T>
// auto add_int_constexpr_if(T& t1, T& t2){
//     if constexpr (std::is_integral_v<T>) {
//         return t1 + t2;
//     }
// }

template<class T>
concept Integral = std::is_integral_v<T>;

template<class T> requires Integral<T>
auto add_int_constraints(T& t1, T& t2){
    return t1 + t2;
}

int main(){
    uint64_t a = 111111111111111;
    uint64_t b = 222222222222222;
    auto res1 = add_int_constraints<uint64_t>(a, b);
    std::cout << res1 << std::endl;

    auto m = 1;
    auto n = 2;
    auto res2 = add_int_constraints<decltype(m)>(m, n);
    std::cout << res2 << std::endl;

    // double x = 1.1;
    // double y = 2.2;
    // auto res3 = add_int_constraints<double>(x, y);
    // std::cout << res3 << std::endl;
    
    return 0;
}
