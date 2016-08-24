class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> result;
        if(s.size() <= 10)
        	return result;
        unordered_map<int, int> myMap;
        int key = 0;
        for(int i = 0; i < s.size(); i++) {
        	key = ((key << 2) | getInt(s[i])) & 0xfffff;
        	if(i < 9)
        		continue;
        	else {
        		if(myMap.find(key) == myMap.end())
        			myMap[key] = 1;
        		else {
        			if(myMap[key] == 1) {
        				result.push_back(s.substr(i - 9, 10));
        			}
        			myMap[key]++;
				}
        	}
        }
        return result;
    }
private:
	int getInt(char ch) {
		if(ch == 'A')
			return 0;
		else if(ch == 'C')
			return 1;
		else if(ch == 'G')
			return 2;
		else
			return 3;
	}
};