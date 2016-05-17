class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if len(s) == 0:
            return True
        i = 0
        j = len(s) - 1
        while i < j:
            if s[i].isalnum() is False and i < j:
                i += 1
            elif s[j].isalnum() is False and i < j:
                j -= 1
            elif s[i].upper() != s[j].upper():
                return False
            else:
                i += 1
                j -= 1
        return True