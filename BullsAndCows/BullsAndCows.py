class Solution(object):
    def getHint(self, secret, guess):
        """
        :type secret: str
        :type guess: str
        :rtype: str
        """
        A = 0
        B = 0
        count = [0] * 10
        for i in range(len(secret)):
            if secret[i] == guess[i]:
                A += 1
            else:
                count[int(secret[i])] += 1
                if count[int(secret[i])] <= 0:
                    B += 1
                count[int(guess[i])] -= 1
                if count[int(guess[i])] >= 0:
                    B += 1
        return "%sA%sB" % (A, B)