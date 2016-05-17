class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if len(s) <= 1:
            return s
        result = [[] for i in range(numRows)]
        l = len(s)
        i = 0
        while i < l:
            x = 0
            while x < numRows and i < l:
                result[x].append(s[i])
                i += 1
                x += 1
            x = numRows - 2
            while x >= 1 and i < l:
                result[x].append(s[i])
                x -= 1
                i += 1
        r_s = ""
        for i in range(len(result)):
            r_s += ''.join(result[i])
            # result[0].append(result[i])
        return r_s