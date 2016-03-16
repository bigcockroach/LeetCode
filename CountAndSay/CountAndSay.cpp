#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	string countAndSay(int n) {
		string res = "1";
		if (n <= 0)
			return "";
		for (int i = 0; i < n - 1; i++) {
			string tmp = "";
			int len = res.size();
			for (int j = 0; j < len; j++) {
				int count = 1;
				while ((j + 1 < len) && res[j] == res[j + 1]){
					count++;
					j++;
				}
				tmp += to_string(count) + res[j];
			}
			res = tmp;
		}
		return res;
	}
};