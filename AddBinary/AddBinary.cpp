#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		int m = 0;
		int i = a.size() - 1;
		int j = b.size() - 1;
		string c = "";
		while (i >= 0 || j >= 0 || m == 1) {
			if (i >= 0) {
				m += a[i] - '0';
				i -= 1;
			}
			else
				m += 0;
			if (j >= 0) {
				m += b[j] - '0';
				j -= 1;
			}
			else
				m += 0;
			c = to_string(m % 2) + c;
			m /= 2;
		}
		return c;
	}
};