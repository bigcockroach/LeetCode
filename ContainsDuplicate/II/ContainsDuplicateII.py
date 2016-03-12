class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        if len(nums) < 2:
            return False
        if k > len(nums):
            k = len(nums)
        s = 0
        while s+k <= len(nums):
            tmp = nums[s:s+k+1]
            tmp.sort()
            for i in range(len(tmp)-1):
                if tmp[i] == tmp[i+1]:
                    return True
            s += 1
        return False