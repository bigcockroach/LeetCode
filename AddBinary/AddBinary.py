class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        m = 0
        i = len(a) - 1
        j = len(b) - 1
        c = ''
        while i >= 0 or j >= 0 or m == 1:
            if i >= 0:
                m += int(a[i])
                i -= 1
            else:
                m += 0
            if j >= 0:
                m += int(b[j])
                j -= 1
            else:
                m += 0
            c = str(m % 2) + c
            m /= 2
        return c