class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        result = nums[0]
        tmp = nums[0]
        for i in xrange(1,len(nums)):
        	tmp = max(tmp + nums[i], nums[i])
        	result = max(result, tmp)
        return result