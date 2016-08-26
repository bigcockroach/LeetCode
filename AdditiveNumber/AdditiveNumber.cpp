class Solution {
public:
    bool isAdditiveNumber(string num) {
        if(num.size() < 3)
        	return false;
        for(int i = 1; i <= num.size() / 2; i++) {
        	for(int j = 1; j <= (num.size() - i) / 2; j++) {
        		if(isValid(num.substr(0, i), num.substr(i, j), num.substr(i + j)))
        			return true;
        	}
        }
        return false;
    }
private:
	bool isValid(string num1, string num2, string num) {
		if((num1.size() > 1 && num1[0] == '0') || (num2.size() > 1 && num2[0] == '0'))
			return false;
		string sum = addTwoString(num1, num2);
		if(sum == num)
			return true;
		else if(num.size() <= sum.size() || sum != num.substr(0, sum.size()))
			return false;
		else
			return isValid(num2, sum, num.substr(sum.size()));
	}

	string addTwoString(string m, string n) {
		string result;
		int i = m.size() - 1, j = n.size() - 1, carry = 0;
		while(i >= 0 || j >=0) {
			int a = (i>=0?m[i--] - '0':0);
			int b = (j>=0?n[j--] - '0':0);
			int s = a + b + carry;
			result.push_back(s%10 + '0');
			carry = s / 10;
		}
		if(carry)
			result.push_back(carry + '0');
		std::reverse(result.begin(), result.end());
		return result;
	}
};