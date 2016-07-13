class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        dp = [[0 * n] * m]
        for i in xrange(m):
        	for j in xrange(n):
        		if i == 0 or j == 0:
        			dp[i][j] = 1
        		else:
        			dp[i][j] = dp[i][j] + dp[i-1][j] + dp[i][j - 1]
        return dp[m-1][n-1]