class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        DFS(nums, 0, result);
        return result;
    }
private:
	void DFS(vector<int> &nums, int begin, vector<vector<int>> &result) {
		if(begin == nums.size()) {
			result.push_back(nums);
			return;
		}
		for(int i = begin; i < nums.size(); i++) {
			swap(nums[i], nums[begin]);
			DFS(nums, begin + 1, result);
			swap(nums[i], nums[begin]);
		}
	}
};