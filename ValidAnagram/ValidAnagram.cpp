#include<string>
using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		if (s.size() != t.size())
			return false;
		int counts[26] = { 0 };
		for (int i = 0; i < s.size(); i++){
			counts[s[i] - 'a'] += 1;
			counts[t[i] - 'a'] -= 1;
		}
		for (int i = 0; i < 26; i++){
			if (counts[i] != 0)
				return false;
		}
		return true;
	}
};