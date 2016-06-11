class Solution(object):
    def integerBreak(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 2:
        	return 1
        if n == 3:
        	return 2
        result = 1
        while n > 4:
        	result = result * 3
        	n = n - 3
        result = result * n
        return result