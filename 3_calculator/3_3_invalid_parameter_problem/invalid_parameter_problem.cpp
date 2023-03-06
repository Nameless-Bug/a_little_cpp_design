#include <iostream>
#include <utility>

int adder(const int& x, const int& y){
    int res = x + y;
    return res;
}

int subtractor(const int& x, const int& y){
    int res = x - y;
    return res;
}

int multiplier(const int& x, const int& y){
    int res = x * y;
    return res;
}

// In order to focus on program design, precision and exception handling are not considered here
int divider(const int& x, const int& y){
    int res = x / y;
    return res;
}

int calculator_int(const int& x, const int& y, char op){
    int res;
    if (op == 'a') {
        res = adder(x, y);
    } else if (op == 'b') {
        res = subtractor(x, y);
    } else if (op == 'c') {
        res = multiplier(x, y);
    } else if (op == 'd') {
        res = divider(x, y);
    }
    return res;
}

int calculator_char(const int& x, const int& y, char op){
    int res;
    if (op == 'a') {
        res = adder(x, y);
    } else if (op == 'b') {
        res = subtractor(x, y);
    } else if (op == 'c') {
        res = multiplier(x, y);
    } else if (op == 'd') {
        res = divider(x, y);
    }
    return res;
}

int calculator_double(const int& x, const int& y, double op){
    int res;
    if (op == 1.1) {
        res = adder(x, y);
    } else if (op == 3.14) {
        res = subtractor(x, y);
    } else if (op == 2.718) {
        res = multiplier(x, y);
    } else if (op == 1.618) {
        res = divider(x, y);
    }
    return res;
}

int main(){
    /* bad example
    int res1 = calculator_int(1, 2, 10000);
    int res2 = calculator_char(1, 2, 'e');
    int res3 = calculator_double(1, 2, 1.414);
    */

    return 0;
}



/* possible solution
std::pair<bool, int> calculator_int_pair(const int& x, const int& y, int op){
    if (op == 1) {
        return std::pair<bool, int>(true, adder(x, y));
    } else if (op == 2) {
        return std::pair<bool, int>(true, subtractor(x, y));
    } else if (op == 3) {
        return std::pair<bool, int>(true, multiplier(x, y));
    } else if (op == 1.618) {
        return std::pair<bool, int>(true, divider(x, y));
    } else {
        return std::pair<bool, int>(false, 0);
    }
}
*/

    // std::pair<bool, int> res = calculator_int_pair(1, 2, 1);
    // if (res.first){
    //     // do something ...
    //     std::cout << res.second << std::endl;
    // } else {
    //     // discard and log ...
    //     std::cout << "invalid input!!!" << std::endl;
    // }