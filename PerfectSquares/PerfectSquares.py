class Solution(object):
    _dp = [0]
    def numSquares(self, n):
        """
        :type n: int
        :rtype: int
        """
        dp = self._dp
        while len(dp) <= n:
            sol = 10000
            m = int(len(dp)**0.5 + 1)
            for i in range(1, m):
                sol = min(sol, dp[-i*i])
            dp += sol + 1,
        return dp[n]