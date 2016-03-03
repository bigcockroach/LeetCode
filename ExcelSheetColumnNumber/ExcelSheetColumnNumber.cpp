#include<string>
using namespace std;

class Solution {
public:
	int titleToNumber(string s) {
		int result = 0;
		for (int i = 0; i < s.size(); i++) {
			result += pow(26, i) + (s[i] - 'A');
		}
		return result;
	}
};