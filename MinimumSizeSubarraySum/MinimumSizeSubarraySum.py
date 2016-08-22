class Solution(object):
    def minSubArrayLen(self, s, nums):
        """
        :type s: int
        :type nums: List[int]
        :rtype: int
        """
        start = 0
        end = 0
        tmp_S = 0
        m = len(nums) + 1
        while start < len(nums) and end < len(nums):
            while tmp_S < s and end < len(nums):
                tmp_S += nums[end]
                end += 1
            while tmp_S >= s and start <= end:
                m = min(m, end - start)
                tmp_S -= nums[start]
                start += 1
        if m == len(nums) + 1:
            return 0
        else:
            return m