#include <string>

using std::string;

class Solution {
public:
	bool isPalindrome(string s) {
		if (s.size() == 0)
			return true;
		for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
			while (isalnum(s.at(i)) == false && i < j)
				i++;
			while (isalnum(s.at(j)) == false && i < j)
				j--;
			if (toupper(s.at(i)) != toupper(s.at(j)))
				return false;
		}
		return true;
	}
};