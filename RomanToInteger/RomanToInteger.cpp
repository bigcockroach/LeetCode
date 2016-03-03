#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		unordered_map<char, int> Roman;
		Roman['I'] = 1;
		Roman['V'] = 5;
		Roman['X'] = 10;
		Roman['L'] = 50;
		Roman['C'] = 100;
		Roman['D'] = 500;
		Roman['M'] = 1000;
		int n = s.size(), result = 0;
		for (int i = 0; i < n; i++) {
			if ((i < n - 1) && (Roman[s[i]] < Roman[s[i + 1]]))
				result -= Roman[s[i]];
			else
				result += Roman[s[i]];
		}
		return result;
	}
};

void main() {
	Solution A;
	printf("%d", A.romanToInt("DCXXI"));
}