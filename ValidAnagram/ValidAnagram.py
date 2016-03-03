class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
        	return False
        n = len(s)
        counts = [0] * 26
        for i in xrange(n):
        	counts[ord(s[i] - 97)] += 1
        	counts[ord(s[i] - 97)] -= 1
        for i in counts:
        	if i != 0:
        		return False
        return True