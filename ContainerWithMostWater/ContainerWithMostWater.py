class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left = 0
        right = len(height) - 1
        result = 0
        while i < j:
        	tmp = (j - i) * min(height[left], height[right])
        	if height[left] > height[right]:
        		right -= 1
        	else:
        		left += 1
        return result