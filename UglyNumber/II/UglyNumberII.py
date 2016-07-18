class Solution(object):
    def nthUglyNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        UgNum = [1 for _ in range(n)]
        t2 = 0
        t3 = 0
        t5 = 0
        for i in range(1, n):
            UgNum[i] = min(UgNum[t2] * 2, min(UgNum[t3] * 3, UgNum[t5] * 5))
            if UgNum[i] == UgNum[t2] * 2:
                t2 += 1
            if UgNum[i] == UgNum[t3] * 3:
                t3 += 1
            if UgNum[i] == UgNum[t5] * 5:
                t5 += 1
        return UgNum[-1]