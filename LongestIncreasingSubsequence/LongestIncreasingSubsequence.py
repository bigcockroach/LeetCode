class Solution(object):
    def lengthOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dp = []
        for i in xrange(len(nums)):
            it = self.BS(dp, nums[i])
            if it == len(dp):
                dp.append(nums[i])
            else:
                dp[it] = nums[i]
        return len(dp)

    def BS(self, dp, target):
        left = 0
        right = len(dp)
        while left < right:
            mid = (left + right) / 2
            if dp[mid] >= target:
                right = mid
            else:
                left = mid + 1
        return left