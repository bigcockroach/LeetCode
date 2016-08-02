class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> tmp;
        doPartition(s, result, tmp);
        return result;
    }

private:
	bool isPartition(string s) {
		int start = 0, end = s.size() - 1;
		while(start < end) {
			if(s[start] == s[end]) {
				start++;
				end--;
			}
			else
				return false;
		}
		return true;
	}

	void doPartition(string s, vector<vector<string>>& result, vector<string>& tmp) {
		if(s.size() == 0) {
			result.push_back(tmp);
			return;
		}
		int size = s.size();
		for(int i = 0; i < size; i++) {
			if(isPartition(s.substr(0, i + 1))) {
				tmp.push_back(s.substr(0, i + 1));
				doPartition(s.substr(i + 1, size - i - 1), result, tmp);
				tmp.pop_back();
			}
		}
	}
};