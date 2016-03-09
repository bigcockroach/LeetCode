class Stack(object):
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.l = []

    def push(self, x):
        """
        :type x: int
        :rtype: nothing
        """
        self.l.append(x)

    def pop(self):
        """
        :rtype: nothing
        """
        self.l.pop()
        

    def top(self):
        """
        :rtype: int
        """
        return self.l[-1]

    def empty(self):
        """
        :rtype: bool
        """
        return len(self.l) == 0