class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        for i in range(len(digits)-1, -1, -1):
            digits[i] = digits[i] + 1 if digits[i] < 9 else 0
            if digits[i]: 
                return digits
        digits.insert(0, 1)
        return digits