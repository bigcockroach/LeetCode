class Solution {
public:
    int search(vector<int>& nums, int target) {
        int flag = nums.size(), left, right, mid;
        for(int i = 0; i < nums.size() - 1; i++) {
        	if(nums[i] > nums[i + 1]) {
        		flag = i + 1;
        		break;
        	}
        }
        if(target >= nums[0]) {
        	left = 0;
        	right = flag;
        }
        else {
        	left = flag;
        	right = nums.size();
        }
        while(left < right) {
        	mid = left + (right - left) / 2;
        	if(target == nums[mid])
        		return mid;
        	else if(target < nums[mid])
        		right = mid;
        	else
        		left = mid + 1;
        }
        return -1;
    }
};