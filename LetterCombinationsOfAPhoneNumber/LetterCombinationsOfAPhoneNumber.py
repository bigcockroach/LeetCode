class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        num = {'2' : "abc", '3' : "def", '4' : "ghi", '5' : "jkl", '6' : "mno", '7' : "pqrs", '8' : "tuv", '9' : "wxyz"}
        result = doCombinations(digits, num, [])
        return result

def doCombinations(digits, num, res):
    if len(digits) == 0:
        return res
    length = len(res)
    m = digits[0]
    tmp = []
    if length == 0:
        for j in range(len(num[m])):
            tmp += num[m][j]
    else:
        for i in range(length):
            for j in range(len(num[m])):
                s = res[i] + num[m][j]
                tmp.append(s)
    result = doCombinations(digits[1:], num, tmp)
    return result