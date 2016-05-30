#include <string>

using std::string;

class Solution {
public:
	int myAtoi(string str) {
		long result = 0;
		int indicator = 1;
		int i = 0;
		while (str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
			indicator = (str[i++] == '-') ? -1 : 1;
		while (i < str.size() && ('0' <= str[i] && str[i] <= '9')) {
			result = result * 10 + (str[i++] - '0');
			if (result * indicator >= INT_MAX) return INT_MAX;
			if (result * indicator <= INT_MIN) return INT_MIN;
		}
		return result * indicator;
	}
};