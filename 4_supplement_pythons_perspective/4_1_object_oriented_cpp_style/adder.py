from operator import Operator

class Adder(Operator):
    def op(self, x, y):
        return x + y