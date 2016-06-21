class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n, 0));
        int i = 0, k = 1;
        while(k <= n * n) {
        	int j = i;
        	while(j < n - i) {
        		result[i][j] = k++;
        		j++;
        	}
        	j = i + 1;
        	while(j < n - i) {
        		result[j][n - i - 1] = k++;
        		j++;
        	}
        	j = n - i - 2;
        	while(j > i) {
        		result[n - i - 1][j] = k++;
        		j--;
        	}
        	j = n - i - 1;
        	while(j > i) {
        		result[j][i] = k++;
        		j--;
        	}
        	i++;
        }
        return result;
    }
};