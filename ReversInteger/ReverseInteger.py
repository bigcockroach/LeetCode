class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        tmp = []
        result = 0
        n = abs(x)
        while n > 0:
            tmp.append(n % 10)
            n = n / 10
        m = len(tmp)
        for i in range(m):
            result += int(tmp[i])*(10**(m-i-1))
        if result > 2**31:
            return 0
        if x < 0:
            result = -result
        return result