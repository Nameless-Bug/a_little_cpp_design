#include <iostream>

class Adder{
public:
    int operator()(const int& x, const int& y){
        return x + y;
    }
};

class Subtractor{
public:
    int operator()(const int& x, const int& y){
        return x - y;
    }
};

class Multiplier{
public:
    int operator()(const int& x, const int& y){
        return x * y;
    }
};

class Divider{
public:
    int operator()(const int& x, const int& y){
        return x / y;
    }
};

int adder(const int& x, const int& y, Adder& a){
    return a(x, y);
}

int subtractor(const int& x, const int& y, Subtractor& s){
    return s(x, y);
}

int multiplier(const int& x, const int& y, Multiplier& m){
    return m(x, y);
}

int divider(const int& x, const int& y, Divider& d){
    return d(x, y);
}

// need a way to unify
// int calculator(const int& x, const int& y, FuncObj& fo){
//     return fo(x, y);
// }

int main(){
    Adder a = Adder();
    Subtractor s = Subtractor();
    Multiplier m = Multiplier();
    Divider d = Divider();
    
    int x = 4;
    int y = 2;

    int res1 = adder(x, y, a);
    std::cout << res1 << std::endl;

    int res2 = subtractor(x, y, s);
    std::cout << res2 << std::endl;

    int res3 = multiplier(x, y, m);
    std::cout << res3 << std::endl;

    int res4 = divider(x, y, d);
    std::cout << res4 << std::endl;

    return 0;
}