class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        c1 = 1 << 32
        c2 = 1 << 32
        for i in nums:
        	if i <= c1:
        		c1 = i
        	elif i <= c2:
        		c2 = i
        	else:
        		return True
        return False