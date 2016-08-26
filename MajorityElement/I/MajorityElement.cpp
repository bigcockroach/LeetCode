#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int major, counts = 0, len = nums.size();
		for (int i = 0; i < len; i++) {
			if (!counts)	{
				major = nums[i];
				counts += 1;
			}
			else {
				counts += (nums[i] == major) ? 1 : -1;
			}
		}
		return major;
	}
};