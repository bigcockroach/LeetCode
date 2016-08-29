class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x <= 1:
            return x
        left = 0
        right = x
        while left < right:
            mid = (left + right) / 2
            if mid * mid > x:
                right = mid
            elif mid * mid < x:
                left = mid + 1
            else:
                return mid
        return left - 1