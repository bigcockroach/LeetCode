class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        tmp = []
        dic = {")":"(", "]":"[", "}":"{"}
        for i in s:
            if i in dic.values():
                tmp.append(i)
            elif i in dic.keys():
                if tmp == [] or dic[i] != tmp.pop():
                    return False
            else:
                return False
        return tmp == []