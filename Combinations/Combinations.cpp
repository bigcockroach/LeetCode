class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        if(n < k)
        	return result;
        vector<int> tmp;
        backtracking(result, 1, 0, n, k, tmp);
        return result;
    }
private:
	void backtracking(vector<vector<int>> &result, int now, int size,int n, int k, vector<int> &tmp) {
		if(size == k) {
			result.push_back(tmp);
			return;
		}
		for(int i = now; i <= n; i++) {
			tmp.push_back(i);
			backtracking(result, i + 1, size + 1,n, k, tmp);
			tmp.pop_back();
		}
	}
};