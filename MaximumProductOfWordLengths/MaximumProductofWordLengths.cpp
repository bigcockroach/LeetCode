class Solution {
public:
    int maxProduct(vector<string>& words) {
        int result = 0;
        vector<int> tmp(words.size(), 0);
        for(int i = 0;i != words.size();i++) {
        	for(auto j:words[i]) 
        	    tmp[i] |= 1 <<(j - 'a');
        }
        for(int i = 0; i < words.size(); i++) 
        	for(int j = i + 1; j < words.size(); j++) {
        		if(!(tmp[i] & tmp[j])) // && (words[i].length() * words[j].size() > result))
        			result = words[i].size() * words[j].size() > result ? words[i].size() * words[j].size():result;
        	}
        return result;
    }
};