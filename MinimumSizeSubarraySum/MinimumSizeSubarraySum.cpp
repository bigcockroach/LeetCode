class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int start = 0, end = 0, S = 0, m = nums.size() + 1;
        int size = nums.size();
        while(start < size && end < size) {
        	while(S < s && end < size) {
        		S += nums[end];
        		end++;
        	}
        	while(S >= s && start <= end) {
        		m = min(m, end - start);
        		S -= nums[start];
        		start += 1;
        	}
        }
        if(m == size + 1)
        	return 0;
        else
        	return m;
    }
};