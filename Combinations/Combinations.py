class Solution(object):
    def combine(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: List[List[int]]
        """
        sol = []
        res = []
        combin_back(res, sol, k, n, 1)
        return res

def combin_back(res, sol, k, n, start):
    if len(sol) == k:
        res.append(list(sol))
        return
    for i in range(start, n + 1):
        sol.append(i)
        combin_back(res, sol, k, n, i + 1)
        sol.pop()