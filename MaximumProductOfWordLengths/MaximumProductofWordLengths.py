class Solution(object):
    def maxProduct(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        res = 0
        num = [0 for _ in range(len(words))]
        # a = 1 b = 10 c = 100 d = 1000
        for i in range(len(words)):
            for j in range(len(words[i])):
                num[i] = num[i] | (1 << (ord(words[i][j])) - 97)
        for i in range(len(words)):
            for j in range(i + 1, len(words)):
                if num[i] & num[j] == 0 and len(words[i]) * len(words[j]) > res:
                    res = len(words[i]) * len(words[j])
        return res