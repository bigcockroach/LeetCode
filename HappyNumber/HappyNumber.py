class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n == None:
            return
        count = 6
        while count:
            n_X = n
            tmp = 0
            while n_X > 1:
                i = n_X % 10
                tmp = tmp + i**2
                n_X = n_X / 10
            tmp += n_X**2
            n = tmp
            count -= 1
        if n == 1:
            return True
        else:
            return False