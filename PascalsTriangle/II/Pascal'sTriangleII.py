class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        if rowIndex == 0:
            return [1]
        result = [0]*(rowIndex+1)
        for i in range(len(result)):
            result[i] = self.C(rowIndex, i)
        return result
        
    def C(self, m, n):
        tmp1 = 1
        tmp2 = 1
        for i in range(m, m-n, -1):
            tmp1 *= i
        for j in range(1, n+1):
            tmp2 *= j
        return tmp1 / tmp2