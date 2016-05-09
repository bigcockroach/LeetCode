#include <string>

using namespace std;

class Solution {
public:
	string reverseVowels(string s) {
		if (s.size() == 0)
			return s;
		string::size_type first = 0;
		string::size_type last = s.size() - 1;
		while (first < last) {
			if (s[first] != 'a' && s[first] != 'e' && s[first] != 'i' && s[first] != 'o' && s[first] != 'u' &&
				s[first] != 'A' && s[first] != 'E' && s[first] != 'I' && s[first] != 'O' && s[first] != 'U') {
				first++;
				continue;
			}
			if (s[last] != 'a' && s[last] != 'e' && s[last] != 'i' && s[last] != 'o' && s[last] != 'u' &&
				s[last] != 'A' && s[last] != 'E' && s[last] != 'I' && s[last] != 'O' && s[last] != 'U') {
				last--;
				continue;
			}
			char tmp = s[first];
			s[first] = s[last];
			s[last] = tmp;
			first++;
			last--;
		}
		return s;
	}
};