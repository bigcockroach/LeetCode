#include<vector>
using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int n = digits.size();
		int d = 0, last = digits[n - 1];
		digits[n - 1] = (last + 1) % 10;
		d = (last + 1) / 10;
		if (d == 0)
			return digits;
		for (int i = n - 2; i >= 0; i--) {
			int tmp = digits[i];
			digits[i] = (tmp + d) % 10;
			d = (tmp + d) / 10;
		}
		if (d == 0)
			return digits;
		else {
			digits.insert(digits.begin(), d);
			return digits;
		}
	}
};