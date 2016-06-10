#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        int left = 1, right = 1;
        if(nums.size() < 2)
        	return nums;
        for(int i = 0;i<nums.size() - 1;i++) {
        	left *= nums[i];
        	result[i+1] *= left;
        }
        for(int j = nums.size() - 1;j > 0;j--) {
        	right *= nums[j];
        	result[j - 1] *= right;
        }
        return result;
    }
};