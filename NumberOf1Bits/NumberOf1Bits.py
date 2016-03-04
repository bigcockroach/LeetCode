class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        counts = 0
        while n != 0:
        	counts += n & 1
        	n = n >> 1
        return counts