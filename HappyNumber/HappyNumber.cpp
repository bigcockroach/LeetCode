#include<unordered_set>
using namespace std;

class Solution {
public:
	bool isHappy(int n) {
		if (n < 1)
			return false;
		if (n == 1)
			return true;
		unordered_set<int> nums;
		nums.insert(n);
		while(true) {
			int tmp = 0;
			while (n != 0) {
				tmp += pow((n % 10), 2);
				n = n / 10;
			}
			if (tmp == 1)
				return true;
			else if (nums.find(tmp) != nums.end())
				return false;
			n = tmp;
			nums.insert(n);
		}
	}
};