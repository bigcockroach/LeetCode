class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        for(int i = 0; i < n; i++) {
        	if(target > matrix[i][m - 1])
        		continue;
        	else {
        		for(int j = m - 1; j >= 0; j--) {
        			if(target == matrix[i][j])
        				return true;
        		}
        	}
        }
        return false;
    }
};