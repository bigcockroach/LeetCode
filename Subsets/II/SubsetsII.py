class Solution(object):
    def subsetsWithDup(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()
        res = []
        sol = []
        getSub(nums, 0, res, sol)
        return res

def getSub(nums, start, res, sol):
    res.append(sol)
    for i in range(start, len(nums)):
        if i == start or nums[i] != nums[i - 1]:
            getSub(nums, i + 1, res, sol + [nums[i]])