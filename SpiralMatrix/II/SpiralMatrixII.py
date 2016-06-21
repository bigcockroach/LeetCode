class Solution(object):
    def generateMatrix(self, n):
        """
        :type n: int
        :rtype: List[List[int]]
        """
        res = [[0 for i in range(n)] for i in range(n)]
        i = 0
        k = 1
        while k <= n * n:
            j = i
            while j < n - i:        # left -> right
                res[i][j] = k
                j += 1
                k += 1
            j = i + 1
            while j < n - i:        # up -> down
                res[j][n - i - 1] = k
                j += 1
                k += 1
            j = n - i - 2
            while j > i:            # right -> left
                res[n - i - 1][j] = k
                j -= 1
                k += 1
            j = n - i - 1
            while j > i:            # down -> up
                res[j][i] = k
                j -= 1
                k += 1
            i += 1
        return res