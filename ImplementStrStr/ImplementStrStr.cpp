#include <string>

using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
		if (haystack.size() < needle.size())
			return -1;
		if (haystack.size() == 0 || needle.size() == 0)
			return 0;
		int j = 0, i = 0;
		for (; i < haystack.size() - needle.size() + 1; i++) {
			while (j < needle.size()) {
				if (haystack[i + j] == needle[j]) {
					j++;
				}
				else{
					j = 0;
					break;
				}
			}
			if (j == needle.size())
				return i;
		}
		return -1;
	}
};