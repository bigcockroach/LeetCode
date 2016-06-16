class Solution(object):
    def grayCode(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        result = []
        size = 1 << n
        for i in xrange(size):
        	result.append(i ^ i >> 1)
        return result