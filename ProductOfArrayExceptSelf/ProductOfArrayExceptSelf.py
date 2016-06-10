class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res = [1]*len(nums)
        left = 1
        if len(nums) < 2:
            return nums
        for i in range(len(nums)-1):
            left *= nums[i]
            res[i+1] *= left
        right = 1
        for i in range(len(nums)-1, 0, -1):
            right *= nums[i]
            res[i-1] *= right
        return res