#include<stdint.h>

using namespace std;

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int counts = 0;
		while (n != 0) {
			counts += (n & 1);
			n = n >> 1;
		}
		return counts;
	}
};