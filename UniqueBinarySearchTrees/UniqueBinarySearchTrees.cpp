class Solution {
public:
    int numTrees(int n) {
        vector<int> tmp(n + 1,0);
        tmp[0] = 0;
        tmp[1] = 1;
        for(int i = 2;i != n;i++) {
        	for(int j = 0;j != i; j++) {
        		tmp[i] += tmp[j] * tmp[i - j - 1];
        	}
        }
        return tmp[n];
    }
};