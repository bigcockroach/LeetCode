class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = 0;
        int sum = 0;
        int closet = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
        	int j = i + 1;
        	int k = nums.size() - 1;
        	sum = nums[i] + nums[j] + nums[k];
        	while(j < k) {
        		sum = nums[i] + nums[j] + nums[k];
        		if(abs(sum - target) < closet) {
        			closet = abs(sum - target);
        			res = sum;
        		}
        		if(closet == 0)
        			return res;
        		if(sum > target)
        			k -= 1;
        		else
        			j += 1;
        	}
        }
        return res;
};