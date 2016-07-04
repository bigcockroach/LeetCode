class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector<int> indexs(citations.size() + 1, 0);
        int n = citations.size();
        for(auto c : citations) {
        	if(c > n)
        		indexs[n]++;
        	else
        		indexs[c]++;
        }
        int sum = n;
        for(int i = 0; i < indexs.size(); i++) {
        	if(sum - indexs[i] <= i)
        		return i;
        	sum -= indexs[i];
        }
        return 0;
    }
};