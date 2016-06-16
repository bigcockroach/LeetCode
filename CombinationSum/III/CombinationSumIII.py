class Solution(object):
    def combinationSum3(self, k, n):
        """
        :type k: int
        :type n: int
        :rtype: List[List[int]]
        """
        res = []
        sol = []
        backtracking(res, sol, k, n)
        return res

def backtracking(res, sol, k, n):
    if len(sol) == k and n == 0:
        res.append(list(sol))      # create a new list if not do that res will change according sol
        return
    if len(sol) < k:
        if len(sol) == 0:
            i = 1
        else:
            i = sol[-1] + 1
        for x in range(i, 10):
            if n - x < 0:
                break
            sol.append(x)
            backtracking(res, sol, k, n - x)
            sol.pop()