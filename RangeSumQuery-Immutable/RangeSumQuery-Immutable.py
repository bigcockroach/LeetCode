class NumArray(object):
    def __init__(self, nums):
        """
        initialize your data structure here.
        :type nums: List[int]
        """
        if len(nums) == 0:
            self.mid = []
            return
        self.mid = [nums[0]]
        for i in range(1, len(nums)):
            self.mid.append(self.mid[i - 1] + nums[i])

    def sumRange(self, i, j):
        """
        sum of elements nums[i..j], inclusive.
        :type i: int
        :type j: int
        :rtype: int
        """
        if i == 0:
            return self.mid[j]
        return self.mid[j] - self.mid[i - 1]