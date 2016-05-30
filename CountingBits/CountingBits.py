class Solution(object):
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        result = [0 for x in xrange(num + 1)]
        for x in xrange(1, num + 1):
        	tmp[x] = tmp[x & (x - 1)] + 1
        return result