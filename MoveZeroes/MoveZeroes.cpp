#include<vector>
using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int zero_count = 0;
		int len = nums.size();
		for (int i = 0; i < len; i++) {
			if (nums[i] == 0) {
				zero_count++;
				continue;
			}
			nums[i - zero_count] = nums[i];
		}
		for (int i = 0; i < zero_count; i++) {
			nums[len - i - 1] = 0;
		}
	}
};