class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() < 1)
        	return 0;
        int result = nums[0];
        int tmp = 0;
        for(int i = 1; i < nums.size(); i++) {
        	tmp = max(tmp + nums[i], nums[i]);
        	result = max(tmp, result);
        }
        return result;
    }
};