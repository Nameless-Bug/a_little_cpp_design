from operator import Operator

class Multiplier(Operator):
    def op(self, x, y):
        return x * y