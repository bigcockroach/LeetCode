class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # Solution One
        # res = nums[0]
        # for i in range(len(nums)):
        #     if nums[i] < res:
        #         res = nums[i]
        # return res
        # 
        # Solution Two
        left = 0
        right = len(nums) - 1
        while left < right:
            if nums[left] < nums[right]:
                return nums[left]
            mid = (left + right) / 2
            if nums[left] <= nums[mid]:
                left = mid + 1
            else:
                right = mid
        return nums[left]