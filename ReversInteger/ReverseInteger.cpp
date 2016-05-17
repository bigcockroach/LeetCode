#include <algorithm>

class Solution {
public:
	int reverse(int x) {
		long result = 0;
		while (x != 0) {
			int tmp = x % 10;
			x = x / 10;
			result = 10 * result + tmp;
		}
		return (result < INT_MIN || result > INT_MAX) ? 0 : result;
	}
};