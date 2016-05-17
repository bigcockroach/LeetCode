#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	string convert(string s, int numRows) {
		/*
		if (s.size() <= 1)
			return s;
		vector<vector<char>> tmp(numRows);
		string::size_type i = 0;
		while (i < s.size()) {
			int x = 0;
			while (x < numRows && i < s.size()) {
				tmp[x++].push_back(s[i++]);
			}
			x = numRows - 2;
			while (x >= 1 && i < s.size())
				tmp[x--].push_back(s[i++]);
		}
		string result = "";
		for (auto m : tmp) {
			for (auto n : m)
				result += n;
		}
		return result;
		*/
		string result = "";
		if (numRows == 1)
			return s;
		int step1, step2;
		int len = s.size();
		for (int i = 0; i<numRows; ++i){
			step1 = (numRows - i - 1) * 2;
			step2 = (i)* 2;
			int pos = i;
			if (pos<len)
				result += s.at(pos);
			while (1){
				pos += step1;
				if (pos >= len)
					break;
				if (step1)
					result += s.at(pos);
				pos += step2;
				if (pos >= len)
					break;
				if (step2)
					result += s.at(pos);
			}
		}
		return result;
	}
};