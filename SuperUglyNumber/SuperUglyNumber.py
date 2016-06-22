class Solution(object):
    def nthSuperUglyNumber(self, n, primes):
        """
        :type n: int
        :type primes: List[int]
        :rtype: int
        """
        index = [0] * len(primes)
        ugly = [1]
        for i in xrange(n):
        	nextUgly = primes[0] * ugly[index[0]]
        	for j in xrange(len(primes)):
        		nextUgly = min(nextUgly, primes[j] * ugly[index[j]])
        	for j in xrange(len(primes)):
        		if nextUgly == primes[j] * ugly[index[j]]:
        			index[j] += 1
        	ugly.append(nextUgly)
        return ugly[n - 1]
