class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> result;
        for(int i = 0; i < input.size(); i++) {
        	char cur = input[i];
        	if(ispunct(cur)) {
        		vector<int> result1 = diffWaysToCompute(input.substr(0, i));
        		vector<int> result2 = diffWaysToCompute(input.substr(i + 1));
        		for(int a : result1)
        			for(int b : result2)
        				result.push_back(cur=='+' ? a + b:cur=='-'? a-b : a*b);
        	}
        }
        if(result.empty())
        	result.push_back(atoi(input.c_str()));
        return result;
    }
};