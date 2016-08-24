class Solution(object):
    def findRepeatedDnaSequences(self, s):
        """
        :type s: str
        :rtype: List[str]
        """
        res = []
        tmp = dict()
        map = {'A' : 0, 'C' : 1, 'G' : 2, 'T' : 3}
        SUM = 0
        for i in range(len(s)):
            SUM = ((SUM << 2) + map[s[i]]) & 0xFFFFF
            x = bin(SUM)
            if i < 9:
                continue
            tmp[SUM] = tmp.get(SUM, 0) + 1
            if tmp[SUM] == 2:
                res.append(s[i - 9 : i + 1])
        return res