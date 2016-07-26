class Solution(object):
    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        candidates.sort()
        res = []
        getSubSum2(candidates, target, res, [], 0)
        return res

def getSubSum2(candidates, target, res, tmp, cur):
    if target == 0:
        res += tmp,
        return res
    else:
        for i in range(cur, len(candidates)):
            if candidates[i] > target:
                return
            if i != 0 and candidates[i] == candidates[i - 1] and i > cur:
                continue
            getSubSum2(candidates, target - candidates[i], res, tmp + [candidates[i]], i + 1)