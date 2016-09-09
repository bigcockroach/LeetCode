class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> p(10, 1);
        for(int i = 1; i < =9; i++)
        	p[i] = i * p[i - 1];
        vector<char> numS = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
        string result;
        while(n > 0) {
        	int tmp = (k - 1) / p[n - 1];
        	result += numS[tmp];
        	numS.erase(numS.begin() + tmp);
        	k = k - tmp*p[n - 1];
        	n--;
        }
        return result;
    }
};