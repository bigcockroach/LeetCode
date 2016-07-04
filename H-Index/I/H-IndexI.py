class Solution(object):
    def hIndex(self, citations):
        """
        :type citations: List[int]
        :rtype: int
        """
        index = [0 for _ in range(len(citations) + 1)]
        N = len(citations)
        for c in citations:
            if c < N:
                index[c] += 1
            else:
                index[N] += 1
        sum = N
        for i in range(len(index)):
            if sum - index[i] <= i:
                return i
            sum -= index[i]
        return 0