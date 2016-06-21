class Solution(object):
    def diffWaysToCompute(self, input):
        """
        :type input: str
        :rtype: List[int]
        """
        if input.isdigit():
        	return [int(input)]
        result = []
        for i in xrange(len(input)):
        	cur = input[i]
        	if not cur.isdigit():
        		result1 = self.diffWaysToCompute(input[:i])
        		result2 = self.diffWaysToCompute(input[i+1:])
        		for i in result1:
        			for j in result2:
        				if cur == '+':
        					result.append(i + j)
        				elif cur == '-':
        					result.append(i - j)
        				else:
        					result.append(i * j)
        return result