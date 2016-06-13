class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> tmp(32);
        for(auto num : nums) {
        	for(int j = 31; j >= 0; j--) {
        		tmp[j] += num & 1;
        		num >>= 1;
        		if(!num)
        			break;
        	}
        }
        int result = 0;
        for(int j = 31; j >=0 ;j--) {
        	int t = tmp[j] % 3;
        	if(t)
        		result += 1 << (31 - j);
        }
        return result;
    }
};