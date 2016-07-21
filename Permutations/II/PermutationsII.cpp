class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> tmp;
        unordered_map<int, int> help_map;
        for(int i : nums) {
        	if(help_map.find(i) == help_map.end())
        		help_map[i] = 0;
        	help_map[i]++;
        }
        BACK(result, tmp, help_map, nums.size());
        return result;
    }
private:
	void BACK(vector<vector<int>>& result, vector<int>& tmp, unordered_map<int, int>& help_map, int n) {
		if(n == 0) {
			result.push_back(tmp);
			return;
		}
		for(auto it = help_map.begin(); it != help_map.end(); it++) {
			if(it->second == 0)
				continue;
			it->second--;
			tmp.push_back(it->first);
			BACK(result, tmp, help_map, n - 1);
			tmp.pop_back();
			it->second++;
		}
	}
};