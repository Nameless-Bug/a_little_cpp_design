#include <iostream>

class Person{};

template<class T>
T add(T& t1, T& t2){
    return t1 + t2;
}

int main(){
    int a = 4;
    int b = 2;

    double c = 1.1;
    double d = 2.2;

    int res1 = add<int>(a, b);
    std::cout << res1 << std::endl;

    double res2 = add<double>(c, d);
    std::cout << res2 << std::endl;

    // Person p1 = Person();
    // Person p2 = Person();
    // Person p3 = add<Person>(p1, p2);

    return 0;
}