class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        res = 0
        closet = 1000000
        nums.sort()
        for i in range(len(nums) - 2):
            j = i + 1
            k = len(nums) - 1
            sum = nums[i] + nums[j] + nums[k]
            while j < k:
                sum = nums[i] + nums[j] + nums[k]
                if abs(sum - target) < closet:
                    closet = abs(sum - target)
                    res = sum
                if closet == 0:
                    return res
                if sum > target:
                    k -= 1
                else:
                    j += 1
        return res