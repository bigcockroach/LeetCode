class Solution(object):
    def isAdditiveNumber(self, num):
        """
        :type num: str
        :rtype: bool
        """
        n = len(num)
        for i in range(1, n / 2 + 1):
            j = 1
            while max(i, j) <= n - i - j:
                if check(num[:i], num[i:j + i], num[i + j:]):
                    return True
                j += 1
        return False

def check(num1, num2, num):
    if len(num1) > 1 and num1[0] == '0' or len(num2) > 1 and num2[0] == '0':
        return False
    tmp_sum = str(int(num1) + int(num2))
    if num == tmp_sum:
        return True
    if len(num) <= len(tmp_sum) or tmp_sum != num[:len(tmp_sum)]:
        return False
    else:
        return check(num2, tmp_sum, num[len(tmp_sum):])