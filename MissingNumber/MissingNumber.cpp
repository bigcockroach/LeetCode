class Solution {
public:
	/*
    int missingNumber(vector<int>& nums) {
        int total = (1 + nums.size()) * nums.size() / 2;
        int tmp = 0;
        for(auto num : nums)
        	tmp += num;
        return total - tmp;
    }
    */
    /*using bit Manipulation*/
    int missingNumber(vector<int>& nums) {
        int result = nums.size(); // this is important
        int i = 0;
        for(auto num:nums) {
        	result ^= num;
        	result ^= i++;
        }
        return result;
    }
};