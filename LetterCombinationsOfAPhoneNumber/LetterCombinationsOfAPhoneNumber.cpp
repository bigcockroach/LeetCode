class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.size() == 0)
        	return result;
        unordered_map<char, vector<string>> PhoneNumber;
        PhoneNumber['0'] = {};
        PhoneNumber['1'] = {};
        PhoneNumber['2'] = {"a", "b", "c"};
        PhoneNumber['3'] = {"d", "e", "f"};
        PhoneNumber['4'] = {"g", "h", "i"};
        PhoneNumber['5'] = {"j", "k", "l"};
        PhoneNumber['6'] = {"m", "n", "o"};
        PhoneNumber['7'] = {"p", "q", "r", "s"};
        PhoneNumber['8'] = {"t", "u", "v"};
        PhoneNumber['9'] = {"w", "x", "y", "z"};
        string tmp_string = "";
        Combinate(result, string, digits, 0, digits.size(), PhoneNumber);
        return result;
    }
private:
	void Combinate(vector<string>& result, string& tmp_string, string digits, int start, int end, unordered_map<char, vector<string>>& PhoneNumber) {
		if(start >= end) {
			result.push_back(tmp_string);
			return;
		}
		vector<string> sub = PhoneNumber.find(digits[start])->second;
		for(int i = 0; i < sub.size(); i++) {
			tmp_string += sub[i];
			Combinate(result, tmp_string, digits, start + 1, end, PhoneNumber);
			tmp_string.pop_back();
		}
	}
};