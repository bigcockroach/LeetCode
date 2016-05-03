#include <string>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
		if (s.size() == 0)
			return s;
       	string::size_type first = 0;
    	string::size_type last = s.size() - 1;
    	while(first < last) {
    		char tmp = s[first];
    		s[first] = s[last];
    		s[last] = tmp;
    		first++;
    		last--;
    	}
    	return s;
    }
};