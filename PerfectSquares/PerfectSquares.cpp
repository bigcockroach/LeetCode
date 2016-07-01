class Solution {
public:
    int numSquares(int n) {
        if(n <= 0)
        	return 0;
        static vector<int> dp({0});
        while(dp.size() <= n) {
        	int m = dp.size();
        	int cnt = INT_MAX;
        	for(int i = 1; i * i <= m; i++) {
        		cnt = min(cnt, dp[m - i * i] + 1);
        	}
        	dp.push_back(cnt);
        }
        return dp[n];
    }
};