class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        left = 0
        right = len(nums) - 1
        res = [-1, -1]
        while left < right:
            mid = left + (right - left) / 2
            if nums[mid] < target:
                left = mid + 1
            else:
                right = mid
        if nums[left] != target:
            return res
        else:
            res[0] = left
    
        right = len(nums) - 1
        while left < right:
            mid = left + (right - left) / 2 + 1
            if nums[mid] > target:
                right = mid - 1
            else:
                left = mid
        res[1] = right
        return res