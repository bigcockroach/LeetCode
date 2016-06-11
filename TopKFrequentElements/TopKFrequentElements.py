class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        nums_dict = {}
        result = []
        for i in xrange(len(nums)):
        	nums_dict[nums[i]] = nums_dict.get(nums[i], 0) + 1
        sorted_dict = sorted(nums_dict.iteritems(), key=lambda d:d[1], reverse=True)
        for key in xrange(len(sorted_dict)):
        	result.append(sorted_dict[key][0])
        return result[0:k]
