#include <vector>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diff = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
        diff &= -diff;
        vector<int> rets = {0, 0};
        for(auto num : nums) {
        	if( (num & diff) == 0) {
        		rets[0]^ = num;
        	}
        	else {
        		rets[1]^ = num;
        	}
        }
        return rets;
    }
};