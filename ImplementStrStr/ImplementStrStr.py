class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if len(haystack) < len(needle):
            return -1
        if len(haystack) == 0 or len(needle) == 0:
            return 0
        for i in range(len(haystack)-len(needle)+1):
            j = 0
            while j < len(needle):
                if haystack[i+j] != needle[j]:
                    break
                else:
                    j += 1
            if j == len(needle):
                return i
        return -1