class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        if len(s) == 0:
        	return s
        first = 0
        last = len(s) - 1
        while first < last:
        	if s[first] != 'a' && s[first] != 'e' && s[first] != 'i' && s[first] != 'o' && s[first] != 'u' &&
        		s[first] != 'A' && s[first] != 'E' && s[first] != 'I' && s[first] != 'O' && s[first] != 'U':
        		first += 1
        		continue
        	if s[last] != 'a' && s[last] != 'e' && s[last] != 'i' && s[last] != 'o' && s[last] != 'u' &&
				s[last] != 'A' && s[last] != 'E' && s[last] != 'I' && s[last] != 'O' && s[last] != 'U':
				last -= 1
				continue
			tmp = s[first]
			s[first] = s[last]
			s[last] = tmp
			first += 1
			last -= 1
		return s
