#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
	string convertToTitle(int n) {
		string result;
		int m;
		while (n > 0) {
			m = n % 26;
			if (m == 0) {
				result = "Z" + result;
				n = (n / 26) - 1;
			}
			else {
				result = char(m + 64) + result;
				n = n / 26;
			}
		}
		return result;
	}
};