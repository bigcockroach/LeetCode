class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.begin() == nums.end())
        	return;
        vector<int>::iterator i = nums.begin();
        ++i;
        if(i == nums.end())
        	return;
        i = nums.end();
        --i;
        while(true) {
        	vector<int>::iterator ii = i;
        	--i;
        	if(*i < *ii) {
        		vector<int>::iterator j = nums.end();
        		while(!(*i < *--j)) {
        		}
        		std::iter_swap(i, j);
        		std::reverse(ii, nums.end());
        		return;
        	}
        	if(i == nums.begin()) {
        		std::reverse(nums.begin(), nums.end());
        		return;
        	}
        }
    }
};