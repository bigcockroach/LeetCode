class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1) {
        	return x;
        }
        int left = 0, right = x, mid;
        while(left < right) {
        	int mid = (left + right) / 2;
        	if(mid > x / mid)
        		right = mid;
        	else if(mid < x / mid)
        		left = mid + 1;
        	else
        		return mid;
        }
        return left - 1;
    }
};