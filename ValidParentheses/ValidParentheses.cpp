#include<string>
#include<stack>

using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> tmp;
		for (char &c : s) {
			if (c == '(' || c == '[' || c == '{')
				tmp.push(c);
			else if (c == ')') {
				if (tmp.empty() || tmp.top() != '(')
					return false;
				else
					tmp.pop();
			}
			else if (c == ']') {
				if (tmp.empty() || tmp.top() != '[')
					return false;
				else
					tmp.pop();
			}
			else {
				if (tmp.empty() || tmp.top() != '{')
					return false;
				else
					tmp.pop();
			}
		}
		return tmp.empty();
	}
};