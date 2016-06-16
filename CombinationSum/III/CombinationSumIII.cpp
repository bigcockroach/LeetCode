class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> subResult;
        doCombine(result, subResult, k, n, 1);
        return result;
    }
private:
	void doCombine(vector<vector<int>> &result, vector<int> subResult, int k, int n, int now) {
		if(subResult.size() == k && n == 0) {
			result.push_back(subResult);
			return;
		}
		for(int i = now;i <= 9;i++) {
			if(n - i < 0){
				break;
			}
			else{
				subResult.push_back(i);
				doCombine(result, subResult, k, n - i, i + 1);
				subResult.pop_back();
			}
		}
		return;
    }
};