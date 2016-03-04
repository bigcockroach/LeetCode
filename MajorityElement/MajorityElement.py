class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        major = 0
        counts = 0
       	for i in xrange(len(nums)):
       		if counts == 0:
       			major = nums[i]
       			counts += 1
       		else:
       			if nums[i] == major:
       				counts += 1
       			else:
       				counts -= 1
       	return major