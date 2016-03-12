#include<algorithm>
using namespace std;
class Solution {
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
		int areA = (D - B) * (C - A);
		int areB = (H - F) * (G - E);
		int left = max(A, E);
		int right = min(C, G);
		int top = min(H, D);
		int bottom = max(B, F);
		int overlap = 0;
		if (left < right && top > bottom)
			overlap = (right - left) * (top - bottom);
		return areA + areB - overlap;
	}
};