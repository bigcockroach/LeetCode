class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        result = []
        n = len(nums)
        nums.sort()
        i = 0
        while i < n - n / 3:
            if nums[i] == nums[i + n / 3]:
                result.append(nums[i])
                j = i + n / 3 + 1
                while j < n:
                    if nums[j] == nums[i]:
                        j += 1
                    else:
                        break
                i = j
            else:
                i += 1
        return result