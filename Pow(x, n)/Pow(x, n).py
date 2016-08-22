class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        if n == 0:
            return 1
        res = 1
        if n < 0:
            x = 1 / x
            n = abs(n)
        res = getPow(x, n, res)
        return res
    
def getPow(x, n, res):
    if n > 1:
        tmp = getPow(x, n / 2, res)
        if n % 2 == 0:
            res = tmp * tmp
        else:
            res = tmp * tmp * x
    else:
        res = res * x
    return res