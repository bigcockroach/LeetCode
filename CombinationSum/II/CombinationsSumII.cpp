class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> subCombination;
        sort(candidates.begin(), candidates.end());
        BACK(result, subCombination, target, candidates, 0);
        return result;
    }
private:
	void BACK(vector<vector<int>>& result, vector<int>& subCombination, int target, vector<int>& candidates, int start) {
		if(target == 0) {
			result.push_back(subCombination);
			return;
		}
		for(int i = start; i < candidates.size(); i++) {
			if(candidates[i]>target)
				return;
			if(i == start || candidates[i] != candidates[i - 1]) {
				subCombination.push_back(candidates[i]);
				BACK(result, subCombination, target - candidates[i], candidates, i + 1);
				subCombination.pop_back();
			}
		}
	}
};