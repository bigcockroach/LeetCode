class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp;
        for(int i = 0; i < nums.size(); i++) {
        	int it = BS(dp, nums[i]);
        	if(it == dp.size())
        		dp.push_back(nums[i]);
        	else
        		dp[it] = nums[i];
        }
        return dp.size();
    }
private:
	int BS(vector<int> dp, int target) {
		int left = 0, right = dp.size();
		while(left < right) {
			int mid = (left + right) / 2;
			if(dp[mid] >= target)
				right = mid;
			else
				left = mid + 1;
		}
		return left;
	}
};