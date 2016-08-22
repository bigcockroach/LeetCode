class Solution(object):
    def canCompleteCircuit(self, gas, cost):
        """
        :type gas: List[int]
        :type cost: List[int]
        :rtype: int
        """
        total = 0
        tmp_sum = 0
        start = 0
        for i in range(len(gas)):
            total += gas[i] - cost[i]
            if tmp_sum < 0:
                tmp_sum = gas[i] - cost[i]
                start = i
            else:
                tmp_sum += gas[i] - cost[i]
        if total >= 0:
            return start
        else:
            return -1