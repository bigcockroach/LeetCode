class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        subgenerate(result, "", n, 0);
        return result;
    }

private:
	void subgenerate(vector<string> &result, string subStr, int left, int right) {
		if(left == 0 && right == 0) {
			result.push_back(subStr);
			return;
		}
		if(left > 0)
			subgenerate(result, subStr + '(', left - 1, right + 1);
		if(right > 0)
			subgenerate(result, subStr + ')', left, right - 1);
	}
};