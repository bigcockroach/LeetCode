class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;
        for(int i = 1; i <= s.size(); i++) {
        	for(int j = i - 1; j >= 0; j--) {
        		if(dp[j]) {
        			string sub = s.substr(j, i - j);
        			if(wordDict.find(sub) != wordDict.end()) {
        				dp[i] = true;
        				break;
        			}
        		}
        	}
        }
        return dp[s.size()];
	}
};