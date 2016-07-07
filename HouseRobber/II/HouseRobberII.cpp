class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size == 0)
        	return 0;
        if(size == 1)
        	return nums[0];
        if(size == 2)
        	return max(nums[0], nums[1]);
        vector<int> dp1(size - 1, 0);
        vector<int> dp2(size - 1, 0);
        dp1[0] = nums[0];
        dp1[1] = max(nums[0], nums[1]);
        dp2[0] = nums[1];
        dp2[1] = max(nums[1], nums[2]);
        for(int i = 2; i < size - 1; i++) {
        	dp1[i] = max(dp1[i - 1], dp1[i - 2] + nums[i]);
        }
        for(int i = 2; i < size - 1; i++) {
        	dp2[i] = max(dp2[i - 1], dp2[i - 2] + nums[i + 1]);
        }
        return max(dp1.back(), dp2.back());
    }
};