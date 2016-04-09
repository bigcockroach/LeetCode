class Solution(object):
    def wordPattern(self, pattern, str):
        """
        :type pattern: str
        :type str: str
        :rtype: bool
        """
        tmp = str.split()
        return map(pattern.find, pattern) == map(tmp.index, tmp)