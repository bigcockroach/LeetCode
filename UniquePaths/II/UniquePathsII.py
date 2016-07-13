class Solution(object):
    def uniquePathsWithObstacles(self, obstacleGrid):
        """
        :type obstacleGrid: List[List[int]]
        :rtype: int
        """
        dp = [[0 for _ in range(len(m))] for m in obstacleGrid]
        if obstacleGrid[0][0] == 1:
            dp[0][0] = 0
        else:
            dp[0][0] = 1
        for i in range(len(dp)):
            for j in range(len(dp[i])):
                if j == 0 and i > 0:
                    if obstacleGrid[i][j] == 1:
                        dp[i][j] = 0
                    else:
                        dp[i][j] = dp[i - 1][j]
                elif i == 0 and j > 0:
                    if obstacleGrid[i][j] == 1:
                        dp[i][j] = 0
                    else:
                        dp[i][j] = dp[i][j - 1]
                elif j > 0 and i > 0:
                    if obstacleGrid[i][j] == 1:
                        dp[i][j] = 0
                    else:
                        dp[i][j] = dp[i - 1][j] + dp[i][j - 1]
        return dp[-1][-1]