class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 0)
        	return false;
        int maxstep = nums[0];
        for(int i = 1; i < nums.size(); i++) {
        	if(maxstep > 0) {
        		maxstep--;
        		maxstep = max(maxstep, nums[i]);
        	}
        	else
        		return false;
        }
        return true;
    }
};