class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: bool
        """
        flag = len(nums)
        for i in range(len(nums) - 1):
            if nums[i] > nums[i + 1]:
                flag = i + 1
        if target < nums[0]:
            left = flag
            right = len(nums) - 1
        else:
            left = 0
            right = flag - 1
        while left <= right:
            mid = left + (right - left) / 2
            if nums[mid] == target:
                return True
            elif nums[mid] > target:
                right = mid - 1
            else:
                left = mid + 1
        return False