from operator import Operator

class Subtractor(Operator):
    def op(self, x, y):
        return x - y