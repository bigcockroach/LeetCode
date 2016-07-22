class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        if(m == 0)
        	return 0;
        int n = grid[0].size();
        if(n == 0)
        	return 0;
        int result = 0;
        for(int i = 0; i < m; i++) {
        	for(int j = 0; j < n; j++) {
        		if(grid[i][j] != '1')
        			continue;
        		result++;
        		DFS(grid, i, j);
        	}
        }
        return result;
    }
private:
	void DFS(vector<vector<char>>& grid, int i, int j) {
		if(i < 0 || i >= grid.size() || j < 0 || j >=grid[0].size())
			return;
		if(grid[i][j] == '1') {
			grid[i][j] = '2';
			DFS(grid, i - 1, j);
			DFS(grid, i + 1, j);
			DFS(grid, i, j - 1);
			DFS(grid, i, j + 1);
		}
		return;
	}
};