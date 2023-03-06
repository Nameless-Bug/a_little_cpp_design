enum OP {
    ADD,
    SUB,
    MUL,
    DIV
};

extern int error_code;

int calculator(const int& x, const int& y, OP op);