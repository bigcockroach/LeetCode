#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_set<int> tmp;
		if (k <= 0)
			return false;
		if (k >= nums.size())
			k = nums.size() - 1;
		for (int i = 0; i < nums.size(); i++) {
			if (i > k)
				tmp.erase(nums[i - k - 1]);
			if (tmp.find(nums[i]) != tmp.end())
				return true;
			tmp.insert(nums[i]);
		}
		return false;
	}
};