from operator import Operator

class Divider(Operator):
    def op(self, x, y):
        return x / y