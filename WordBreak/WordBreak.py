class Solution(object):
    def wordBreak(self, s, wordDict):
        """
        :type s: str
        :type wordDict: Set[str]
        :rtype: bool
        """
        dp = [False for _ in range(len(s) + 1)]
        dp[0] = True
        for i in range(1, len(s) + 1):
            for j in range(i - 1, -1, -1):
                if dp[j]:
                    x = s[j:i]
                    if x in wordDict:
                        dp[i] = True
                        break
        return dp[len(s)]