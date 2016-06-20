class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result = [[]]
        self._DFS(nums, 0, result)
        return result

    def _DFS(nums, begin, result):
    	if now == len(nums):
    		result.append(list(nums))
    		return
    	for i in xrange(begin, len(nums)):
    		nums[i], nums[begin] = nums[begin], nums[i]
    		self._DFS(nums, begin + 1, result)
    		nums[i], nums[begin] = nums[begin], nums[i]
    	return