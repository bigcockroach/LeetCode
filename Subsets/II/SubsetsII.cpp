class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> tmp;
        createSubsets(result, tmp, nums, 0);
        return result;
    }
private:
	void createSubsets(vector<vector<int>> &result, vector<int> &tmp, vector<int> nums, int begin) {
		result.push_back(tmp);
		for(int i = begin; i < nums.size(); i++) {
			if(i == begin || nums[i] != nums[i - 1]) {
				tmp.push_back(nums[i]);
				createSubsets(result, tmp, nums, i + 1);
				tmp.pop_back();
			}
		}
	}
};