class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size() == 0)
        	return 0;
        vector<int> dp = triangle.back();
        int size = triangle.size();
        for(int i = size - 2; i >= 0; i--) {
        	for(int j = 0; j < triangle[i].size(); j++) {
        		dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
        	}
        }
        return dp[0];
    }
};