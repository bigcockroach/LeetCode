class Solution(object):
    def getPermutation(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: str
        """
        p = [1]
        for i in xrange(1, 10):
        	p.append(i * p[i - 1])
        numS = ['1', '2', '3', '4', '5', '6', '7', '8', '9']
        result = ""
        while n > 0:
        	tmp = (k - 1) / p[n - 1]
        	result += numS[tmp]
        	del numS[tmp]
        	k = k - tmp * p[n - 1]
        	n -= 1
        return result
