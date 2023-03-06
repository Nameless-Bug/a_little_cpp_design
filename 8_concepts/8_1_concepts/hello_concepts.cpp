#include <iostream>
#include <concepts>

template<typename T>
concept Integral = std::is_integral_v<T>;

template<typename T>
concept RealNumber = std::is_integral_v<T> || std::is_floating_point_v<T>;

int main(){
	Integral auto a = 1;
	// Integral auto b = 2.2;
    RealNumber auto c = 3.3;

	return 0;
}
