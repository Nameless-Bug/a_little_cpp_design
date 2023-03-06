from adder import Adder
from subtractor import Subtractor
from multiplier import Multiplier
from divider import Divider

def calculator(x, y, operator):
    return operator.op(x, y)

if __name__ == '__main__':
    a = Adder()
    s = Subtractor()
    m = Multiplier()
    d = Divider()

    x = 4
    y = 2

    res1 = calculator(x, y, a)
    res2 = calculator(x, y, s)
    res3 = calculator(x, y, m)
    res4 = calculator(x, y, d)

    print(res1, res2, res3, res4)