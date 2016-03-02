class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        
        zero_count = 0
        for i in xrange(len(nums)):
            if nums[i] == 0:
                zero_count += 1
                continue
            nums[i - zero_count] = nums[i]
        for i in xrange(zero_count, 0, -1):
            nums[-i] = 0