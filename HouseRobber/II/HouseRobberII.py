class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 0:
            return 0
        if len(nums) == 1:
            return nums[0]
        if len(nums) == 2:
            return max(nums[0], nums[1])
        tmp1 = [nums[0], max(nums[0], nums[1])]
        tmp2 = [nums[1], max(nums[1], nums[2])]
        for i in range(2, len(nums) - 1):
            tmp1 += max(tmp1[i - 1], tmp1[i - 2] + nums[i]),
        for i in range(3, len(nums)):
            tmp2 += max(tmp2[i - 2], tmp2[i - 3] + nums[i]),
        return max(tmp1.pop(), tmp2.pop())