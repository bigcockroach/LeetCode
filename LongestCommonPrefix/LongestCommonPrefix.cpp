#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string prefix = "";
		for (int idx = 0; strs.size()>0; prefix += strs[0][idx], idx++)
			for (int i = 0; i<strs.size(); i++)
				if (idx >= strs[i].size() || (i > 0 && strs[i][idx] != strs[i - 1][idx]))
					return prefix;
		return prefix;
		/*
		string prefix = "";
		if (strs.size() == 0)
			return prefix;
		for (int i = 0; i < strs[0].size(); i++) {
			int k = 1;
			for (; k < strs.size() && strs[k].size() > i; k++) {
				if (strs[k][i] != strs[0][i])
					return prefix;
			}
			if (k == strs.size())
				prefix += strs[0][i];
		}
		return prefix;
		*/
	}
};