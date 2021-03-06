class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n, 1);
        int index_2 = 0;
        int index_3 = 0;
        int index_5 = 0;
        for(int i = 1; i < n; i++) {
        	dp[i] = min(min(dp[index_2] * 2, dp[index_3] * 3), dp[index_5] * 5);
        	if(dp[i] == dp[index_2] * 2)
        		index_2++;
        	if(dp[i] == dp[index_3] * 3)
        		index_3++;
        	if(dp[i] == dp[index_5] * 5)
        		index_5++;
        }
        return dp.back();
    }
};