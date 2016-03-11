#include<vector>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		while (m > 0 && n > 0) {
			if (nums1[m - 1] > nums2[n - 1]) {
				nums1[m + n - 1] = nums1[m - 1];
				m--;
			}
			else {
				nums1[m + n - 1] = nums2[n - 1];
				n--;
			}
		}
		if (m == 0) {
			int i = n - 1;
			while (i >= 0) {
				nums1[i] = nums2[i];
				i--;
			}
		}
		return;
	}
};