class Solution {
public:
    int maxProfit(vector<int>& prices) {
		if(prices.size() < 1)
			return 0;
		vector<int> buy = {-prices[0]};
		vector<int> sell = {prices[0]};
		for(int i = 1;i < prices.size(); i++) {
			buy.push_back(max(sell[i - 2] - prices[i], buy[i - 1]));
			sell.push_back(max(buy[i - 1] + prices[i], sell[i - 1]));
		}
		return sell[prices.size() - 1];
    }
};