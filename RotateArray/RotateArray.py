class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        # one Solution:
        # if k >= len(nums):
        #     k = k % len(nums)
        # for i in range(k):
        #     tmp = nums.pop()
        #     nums.insert(0, tmp)
        
        # two Solution:
        # if k >= len(nums):
        #     k = k % len(nums)
        # idx = 0
        # distance = 0
        # curr = nums[0]
        # for i in range(len(nums)):
        #     next = (idx + k) % len(nums)
        #     tmp = nums[next]
        #     nums[next] = curr
        #     idx = next
        #     curr = tmp
            
        #     distance = (distance + k) % len(nums)
        #     if distance == 0:
        #         idx = (idx + 1) % len(nums)
        #         curr = nums[idx]
        
        # Three Solution:
        if k >= len(nums):
            k = k % len(nums)
        reverse(nums, 0, len(nums) - k)
        reverse(nums, len(nums) - k, len(nums))
        reverse(nums, 0, len(nums))
    
def reverse(nums, start, end):
    mid = (start + end) / 2
    for i in range(start, mid):
        tmp = nums[i]
        nums[i] = nums[start + end - i - 1]
        nums[start + end - i - 1] = tmp
    return nums
        
        