#include <string>

using namespace std;

class Solution {
public:
	int compareVersion(string version1, string version2) {
		int iLength1 = version1.size(), iLength2 = version2.size();
		int num1 = 0, num2 = 0;
		int i = 0, j = 0;
		while (i < iLength1 || j < iLength2) {
			while (i < iLength1 && version1[i] != '.') {
				num1 += num1 * 10 + (version1[i] - '0');
				i++;
			}
			while (j < iLength2 && version2[j] != '.') {
				num2 += num2 * 10 + (version2[j] - '0');
				j++;
			}
			if (num1 > num2)
				return 1;
			else if (num1 < num2)
				return -1;
			num1 = 0;
			num2 = 0;
			i++;
			j++;
		}
		return 0;
	}
};