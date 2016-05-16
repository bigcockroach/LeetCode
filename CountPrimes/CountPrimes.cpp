#include <vector>

using namespace std;

class Solution {
public:
	int countPrimes(int n) {
		if (n <= 2)
			return 0;
		vector<bool> primes(n, true);
		int sum = 1;
		int uppr = sqrt(n);
		for (int i = 3; i < n; i+=2) {
			if (primes[i]) {
				sum++;
				if (i > uppr)
					continue;
				for (int j = i*i; j < n; j += i) {
					primes[j] = false;
				}
			}
		}
		return sum;
	}
};

int main() {
	Solution A;
	A.countPrimes(100);
}