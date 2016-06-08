class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        tmp = 0
        a = b = 0
        for i in nums:
            tmp ^= i
        l = tmp & (-tmp) # find the fitst no zero bit
        for i in nums:
            if i & l:
                a ^= i
            else:
                b ^= i
        return [a, b]