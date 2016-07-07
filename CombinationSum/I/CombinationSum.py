class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        candidates.sort()
        res = []
        sol = []
        getSubsol(candidates, target, res, sol)
        return res

def getSubsol(candidates, target, res, sol):
    for i in range(len(candidates)):
        if target == candidates[i]:
            res.append(sol + [candidates[i]])
            return
        if target < candidates[i]:
            break
        else:
            getSubsol(candidates[i:], target - candidates[i],res, sol + [candidates[i]])