def add(x, y):
    return x + y

def sub(x, y):
    return x - y

def mul(x, y):
    return x * y

def div(x, y):
    return x / y

def calculator(x, y, op):
    return op(x, y)


if __name__ == '__main__':
    x = 4
    y = 2

    res1 = calculator(4, 2, add)
    res2 = calculator(4, 2, sub)
    res3 = calculator(4, 2, mul)
    res4 = calculator(4, 2, div)

    print(res1, res2, res3, res4)