class MinStack:
    def __init__(self):
        self.s = []
    # @param x, an integer
    # @return an integer
    def push(self, x):
        self.s.append(x)
        return x

    # @return nothing
    def pop(self):
        self.s.pop()

    # @return an integer
    def top(self):
        return self.s[0]

    # @return an integer
    def getMin(self):
        return min(self.s)
