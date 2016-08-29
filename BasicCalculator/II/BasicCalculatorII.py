class Solution(object):
    def calculate(self, s):
        """
        :type s: str
        :rtype: int
        """
        pos = 0
        result = 0
        cur_res = 0
        op = '+'
        while pos < len(s):
        	if s[pos] == ' ':
        		pos += 1
        	elif s[pos] >= '0' and s[pos] <= '9':
        		num = 0
        		while pos < len(s) and s[pos] >= '0' and s[pos] <= '9':
        			num = num * 10 + int(s[pos])
        			pos += 1
        		if op == '+':
        			cur_res += num
        		elif op == '-':
        			cur_res -= num
        		elif op == '*':
        			cur_res *= num
        		elif op == '/':
        			if cur_res / num < 0 and cur_res % num != 0:
        				cur_res = cur_res / num + 1
        			else:
        				cur_res /= num
        	else:
        		if s[pos] == '+' or s[pos] == '-':
        			result += cur_res
        			cur_res = 0
        		op = s[pos]
        		pos += 1
        return result + cur_res