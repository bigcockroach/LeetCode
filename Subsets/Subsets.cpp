class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> sets;
        for(int i = 0; i <= nums.size(); i++) {
        	createSubnets(result, nums, i, 0, sets);
        }
        return result;
    }
private:
	void createSubnets(vector<vector<int>> &subsets, vector<int> nums, int size, int begin, vector<int> &sets) {
		if(sets.size() == size) {
			subsets.push_back(sets);
			return;
		}
		for(int i = begin; i < nums.size(); i++) {
			sets.push_back(nums[i]);
			createSubnets(subsets, nums, size, i + 1, sets);
			sets.pop_back();
		}
	}
};