class Solution(object):
    def hIndex(self, citations):
        """
        :type citations: List[int]
        :rtype: int
        """
        N = len(citations)
        left = 0
        right = len(citations) - 1
        while left <= right:
            mid = left + (right - left) / 2
            if N - mid == citations[mid]:
                return N - mid
            elif N - mid < citations[mid]:
                right = mid - 1
            else:
                left = mid + 1
        return N - (right + 1)