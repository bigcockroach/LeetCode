class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i = 0, j = 0;
        while(i < nums.size() - 1) {
        	if(nums[i] < nums[i + 1])
        		j = i + 1;
        	else {
        		if(j != 0)
        			return j;
        	}
        	i++;
        }
        return j;
    }
};