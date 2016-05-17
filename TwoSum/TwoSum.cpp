#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hash;
		vector<int> result;
		for (int i = 0; i < nums.size(); i++) {
			int numToFind = target - nums.at(i);
			if (hash.find(numToFind) != hash.end()) {
				result.push_back(hash[numToFind]);
				result.push_back(i);
				return result;
			}
			hash[nums[i]] = i;
		}
		return result;
	}
};