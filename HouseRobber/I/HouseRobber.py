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
        maxvalue = 0
        s = []
        s.append(nums[0])
        s.append(max(nums[0], nums[1]))
        for i in range(2, len(nums)):
            s.append(max(s[i-1], s[i-2]+nums[i]))
        return s.pop()