#include<string>
#include<sstream>
#include<map>
using namespace std;

class Solution {
public:
	bool wordPattern(string pattern, string str) {
		map<char, int> pattern2i;
		map<string, int> word2i;
		istringstream in(str);
		int i = 0, n = pattern.size();
		for (string word; in >> word; i++) {
			if (i == n || pattern2i[pattern[i]] != word2i[word])
				return false;
			pattern2i[pattern[i]] = word2i[word] = i + 1;
		}
		return i == n;
	}
};