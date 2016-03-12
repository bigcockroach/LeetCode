class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        m = [0 for i in range(256)]
        n = [0 for i in range(256)]
        for i in range(len(s)):
            if m[ord(s[i])] != n[ord(t[i])]:
                return False
            m[ord(s[i])] = i + 1
            n[ord(t[i])] = i + 1
        return True