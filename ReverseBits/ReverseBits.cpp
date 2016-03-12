#include<stdint.h>

using namespace std;
class Solution {
public:
	// amazing!!!
	uint32_t reverseBits1(uint32_t n) {
		n = (n >> 16) | (n << 16);
		n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
		n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
		n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
		n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
		return n;
	}

	// common one
	uint32_t reverseBits2(uint32_t n) {
		uint32_t result = 0;
		for (int i = 0; i < 32; i++) {
			if ((n & 1) == 1) {
				result = (result << 1) + 1;
				n = n >> 1;
			}
			else {
				result = result << 1;
				n = n >> 1;
			}
		}
		return result;
	}
};