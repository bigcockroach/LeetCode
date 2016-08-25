class Solution(object):
    def kSmallestPairs(self, nums1, nums2, k):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :type k: int
        :rtype: List[List[int]]
        """
        queue = []
        def push(i, j):
        	if i < len(nums1) and j < len(nums2):
        		heapq.heappush(queue, [nums1[i] + nums2[j], i, j])
        push(0, 0)
        result = []
        while queue and len(result) < k:
        	_, i, j = heapq.heappop(queue)
        	result.append([nums1[i], nums2[j]])
        	push(i + 1, j)
        	if(i == 0):
        		push(i, j + 1)
        return result
