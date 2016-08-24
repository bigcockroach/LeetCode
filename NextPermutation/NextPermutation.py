class Solution(object):
    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        k = -1
        for i in range(len(nums) - 1, 0, -1):
            if nums[i] > nums[i - 1]:
                k = i - 1
                break
        if k != -1:
            for i in range(len(nums) - 1, -1, -1):
                if nums[i] > nums[k]:
                    nums[i], nums[k] = nums[k], nums[i]
                    break
        i = k + 1
        j = len(nums) - 1
        while i < j:
            nums[i], nums[j] = nums[j], nums[i]
            i += 1
            j -= 1
        return