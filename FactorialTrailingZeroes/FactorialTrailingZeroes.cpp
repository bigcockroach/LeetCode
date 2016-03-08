class Solution {
public:
	int trailingZeroes(int n) {
		if (n == 0)
			return 0;
		int tmp = n / 5;
		int result = tmp;
		while (tmp >= 5) {
			result = result + (tmp / 5);
			tmp = tmp / 5;
		}
		return result;
	}
};