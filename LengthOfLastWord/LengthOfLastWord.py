#cheat
class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        tmp = s.split()
        if len(tmp) is 0:
            return 0
        return len(tmp[-1])