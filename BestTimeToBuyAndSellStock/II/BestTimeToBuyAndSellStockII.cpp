class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        if(prices < 2)
        	return result;
        for(int i = 0;i < prices.size() - 1;i++) {
        	if(prices[i + 1] > prices[i]) {
        		result += prices[i + 1] - prices[i];
        	}
        }
        return result;
    }
};