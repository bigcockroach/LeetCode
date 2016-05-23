#include <vector>

using namespace std;

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		/*
		int tmp;
		for (int i = 0; i < k; i++) {
			tmp = nums.back();
			nums.pop_back();
			nums.insert(nums.begin(), tmp);
		}
		*/
		int n = nums.size();
		int nowIndex = 0, nextIndex;
		int tmp1, tmp2 = nums[0];
		for (int j = 0, i = 0; j<n; j++){
			tmp1 = tmp2;
			nowIndex = (k + nowIndex) % (n);
			tmp2 = nums[nowIndex];
			nums[nowIndex] = tmp1;
			if (nowIndex == i) {
				nowIndex = ++i;
				tmp2 = nums[nowIndex];
			}
		}
	}
};