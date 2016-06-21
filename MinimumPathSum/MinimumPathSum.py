class Solution(object):
    def minPathSum(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        x = len(grid)
        y = len(grid[0])
        i = 0
        j = 0
        sum = [[0 for m in range(y)] for m in range(x)]
        for i in range(x):
            for j in range(y):
                if i == 0 and j == 0:
                    sum[i][j] = grid[i][j]
                else:
                    if i == 0:
                        sum[i][j] = grid[i][j] + sum[i][j-1]
                    elif j == 0:
                        sum[i][j] = grid[i][j] + sum[i-1][j]
                    else:
                        sum[i][j] = min(sum[i-1][j], sum[i][j-1]) + grid[i][j]
        return sum[i][j]