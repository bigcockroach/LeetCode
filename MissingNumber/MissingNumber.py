class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        tmp = 0
        n = len(nums)
        total = (1 + n)*n / 2
        for i in nums:
            tmp += i
        return total - tmp