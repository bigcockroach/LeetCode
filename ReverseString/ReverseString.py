class Solution(object):
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        listS = list(s)
        first = 0
        last = len(listS) - 1
        while first < last:
        	tmp = listS[first]
        	listS[first] = listS[last]
        	listS[last] = tmp
        	first += 1
        	last -= 1
        return "".join(listS)

if __name__ == '__main__':
	A = Solution()
	s = A.reverseString("123")
	print s