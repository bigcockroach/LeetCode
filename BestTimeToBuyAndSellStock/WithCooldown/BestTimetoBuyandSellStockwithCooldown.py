class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices) <= 1:
            return 0
        buy = [- prices[0]]
        sell = [0]
        for i in range(1, len(prices)):
            buy += max(sell[i - 2] - prices[i], buy[i - 1]),
            sell += max(buy[i - 1] + prices[i], sell[i - 1]),
        return sell[len(prices) - 1]