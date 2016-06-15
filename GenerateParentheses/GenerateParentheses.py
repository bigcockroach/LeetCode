class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        res = []
        generate("", n, 0, res)
        return res

def generate(st, left, right, res):
    if left == 0 and right == 0:
        return res.append(st)
    if left > 0:
        generate(st+'(', left-1, right+1, res)
    if right > 0:
        generate(st+')', left, right-1, res)