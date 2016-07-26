class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> help;
        string tmp;
        for(auto s : strs) {
        	tmp = s;
        	sort(tmp.begin(), tmp.end());
        	help[tmp].push_back(s);
        }
        vector<vector<string>> result;
        for(auto h : help) {
        	vector<string> subAnagrams(h.second.begin(), h.second.end());
        	result.push_back(subAnagrams);
        }
        return result;
    }
};