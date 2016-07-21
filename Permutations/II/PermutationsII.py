class Solution(object):
    def permuteUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = [[]]
        for n in nums:
            tmp = []
            for l in res:
                for i in xrange(len(l)+1):
                    tmp.append(l[:i]+[n]+l[i:])
                    if i < len(l) and l[i] == n:
                        break
            res = tmp
        return res