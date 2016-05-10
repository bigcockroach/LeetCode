#include <vector>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() < 2)
			return 0;
		int result = 0;
		int low = prices[0];
		for (int i = 1; i < prices.size(); i++) {
			if (prices[i] < low)
				low = prices[i];
			if (prices[i] - low > result)
				result = prices[i] - low;
		}
		return result;
	}
};