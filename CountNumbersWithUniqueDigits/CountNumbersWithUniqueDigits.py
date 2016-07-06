class Solution(object):
    def countNumbersWithUniqueDigits(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 0:
        	return 1
        if n == 1:
        	return 10
        val = 9
        ans = 10
        for i in xrange(2, n + 1):
        	val *= (9 - i + 2)
        	ans += val
        return ans