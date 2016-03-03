class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        resultmap = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        count = [resultmap[x] for x in s]
        result = sum(count)
        for i in range(len(count) - 1):
            if count[i] < count[i+1]:
                result -= 2*count[i]
        return result