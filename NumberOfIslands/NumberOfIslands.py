class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        count = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == '1':
                    doIsland(grid, i, j)
                    count += 1
        return count

def doIsland(grid, i, j):
    if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[i]):
        return
    if grid[i][j] == '1':
        grid[i][j] = 'X'
        doIsland(grid, i - 1, j)
        doIsland(grid, i + 1, j)
        doIsland(grid, i, j - 1)
        doIsland(grid, i, j + 1)