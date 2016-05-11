class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if len(strs) == 0:
            return ""
        res = strs[0]
        for i in range(1, len(strs)):
            res = self.findPrefix(strs[i], res)
        return res
        
        
    def findPrefix(self, str1, result):
        newResult = ''
        for i in range(min(len(str1), len(result))):
            if str1[i] == result[i]:
                newResult += str1[i]
            else:
                break
        return newResult
                