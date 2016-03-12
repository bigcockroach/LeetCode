#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_map<int, int> counts;
		for (int i = 0; i < nums.size(); i++) {
			counts[nums[i]] += 1;
			if (counts[nums[i]] > 1)
				return true;
		}
		return false;
	}
};