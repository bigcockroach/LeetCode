class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        INT_MAX = 2147483647
        INT_MIN = -2147483648
        res = 0
        flag = 1
        i = 0
        str += 'N'
        while i < len(str):
            while str[i] == " ":
                i += 1
            if str[i] == '-':
                flag = -1
                i += 1
            elif str[i] == '+':
                i += 1
            while str[i] >= '0' and str[i] <= '9':
                res = res*10 + int(str[i])
                i += 1
                if res*flag > INT_MAX:
                    return INT_MAX
                elif res*flag < INT_MIN:
                    return INT_MIN
            return res*flag
            