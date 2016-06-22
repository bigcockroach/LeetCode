class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int> index(primes.size(), 0), ugly;
        ugly.push_back(1);
        for(int i = 1; i < n;i++) {
        	int next = ugly[index[0]] * primes[0];
        	for(int j = 0;j < primes.size(); j++)
        		next = min(next, ugly[index[j]] * primes[j]);
        	for(int j = 0;j < primes.size(); j++)
        		if(next == ugly[index[j]] * primes[j])
        			index[j]++;
        	ugly.push_back(next);
        }
        return ugly[n - 1];
    }
};