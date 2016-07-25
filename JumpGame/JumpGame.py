class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if len(nums) == 0:
            return False
        maxstep = nums[0]
        for i in range(1, len(nums)):
            if maxstep > 0:
                maxstep -= 1
                maxstep = max(maxstep, nums[i])
            else:
                return False
        return True