class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result = []
        for i in xrange(len(nums) + 1):
        	self.createSubsets(result, nums, i, 0, [])
        return result

    def createSubsets(self, result, nums, size, now, tmp):
    	if len(tmp) == size:
    		result.append(tmp)
    		return
    	for i in xrange(now, len(nums)):
    		self.createSubsets(result, nums, size, i + 1, tmp + [nums[i]])