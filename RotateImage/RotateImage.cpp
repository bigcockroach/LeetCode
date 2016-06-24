class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int index = matrix.size() / 2;
        for(int i = 0; i < index; i++) {
        	int last = matrix.size() - 1 - i;
        	for(int j = i; j < last; j++) {
        		int offset = j - i;
        		int top = matrix[i][j];
        		matrix[i][j] = matrix[last - offset][i];
        		matrix[last - offset][i] = matrix[last][last - offset];
        		matrix[last][last - offset] = matrix[j][last];
        		matrix[j][last] = top;
        	}
        }
    }
};