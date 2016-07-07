class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> tmp;
        getresult(result, tmp, candidates, target, 0);
        return result; 
    }
private:
	void getresult(vector<vector<int>> &result, vector<int> &tmp, const vector<int> candidates, int target, int begin) {
		if(target == 0) {
			result.push_back(tmp);
			return;
		}
		for(int i = begin; i < candidates.size() && target >= candidates[i]; i++) {
			tmp.push_back(candidates[i]);
			getresult(result, tmp, candidates, target - candidates[i], i);
			tmp.pop_back();
		}
	}
};