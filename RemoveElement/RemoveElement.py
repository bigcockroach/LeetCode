class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        if nums == []:
            return 0
        i = 0
        while i < len(nums):
            if nums[i] == val:
                for j in xrange(i, len(nums)-1):
                    nums[j] = nums[j+1]
                nums.pop()
            else:
                i += 1
        return len(nums)