class Solution(object):
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """
        result = 0
        for i in range(len(s)):
            tmp = ord(s[i]) - 64
            result += tmp*pow(26, len(s)-1-i)
        return result