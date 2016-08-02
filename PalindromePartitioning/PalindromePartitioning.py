class Solution(object):
    def partition(self, s):
        """
        :type s: str
        :rtype: List[List[str]]
        """
        result = []
        dopart(s, result, [])
        return result

def dopart(s, result, tmp):
    if len(s) == 0:
        result.append(tmp)
        return
    for i in range(len(s)):
        if ispalindrome(s[: i + 1]):
            dopart(s[i + 1:], result, tmp + [s[:i + 1]])
        else:
            continue
    
def ispalindrome(S):
    left = 0
    right = len(S) - 1
    while left < right:
        if S[left] == S[right]:
            left += 1
            right -= 1
        else:
            return False
    return True