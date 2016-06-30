class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        L = 0
        R = len(nums) - 1
        while L < R:
            left = L
            right = R
            key = nums[left]
            while left < right:
                while nums[right] < key and left < right:
                    right -= 1
                nums[left] = nums[right]
                while nums[left] >= key and left < right:
                    left += 1
                nums[right] = nums[left]
            nums[left] = key
            if left == k - 1:
                return nums[k - 1]
            elif left > k - 1:
                R = left - 1
            else:
                L = left + 1
        return nums[k - 1]