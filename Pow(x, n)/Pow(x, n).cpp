class Solution {
public:
    double myPow(double x, int n) {
        if (n == INT_MIN) {
            if (x == 1) return x;
            else if (x == -1) return -x;
            else return 0;
        } else if (n == INT_MAX) {
            if (x == 1 || x == -1) return x;
            else return 0;
        }
        double result = 1.0;
        if(n < 0) {
        	x = 1.0 / x;
        	n = abs(n);
        }
        result = getPow(x, n, result);
        return result;
    }
private:
	double getPow(double x, int n, double& result) {
		if(n > 1) {
			double tmp = getPow(x, n / 2, result);
			if(n % 2 != 0)
				result = tmp * tmp * x;
			else
				result = tmp * tmp;
		}
		else
			result *= x;
		return result;
	}
};