
class Solution(object):
    def reverseBits(self, n):
        """
        :type n: int
        :rtype: int
        """
        res = 0
        for i in range(32):
            if n & 1 == 1:
                res = (res << 1) + 1
                n = n >> 1
            else:
                res = res << 1
                n = n >> 1
            # res = res << 1
            # res |= n & 1
            # n = n >> 1
        return res