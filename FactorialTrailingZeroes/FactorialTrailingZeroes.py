class Solution(object):
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 0:
            return 0
        tmp = n / 5
        result = tmp
        if tmp >= 5:
            while tmp >= 5:
                result = result + (tmp / 5)
                tmp = tmp / 5
        return result