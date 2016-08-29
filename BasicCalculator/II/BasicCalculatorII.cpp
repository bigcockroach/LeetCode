class Solution {
public:
    int calculate(string s) {
        stack<int> nums;
        int sum = 0, num = 0;
        char op = '+';
        for(int i = 0; i < s.size(); i++) {
        	if(s[i] >= '0' && s[i] <= '9') {
        		num = num * 10 + s[i] - '0';
        	}
        	if(!isdigit(s[i]) && s[i] != ' ' || i == s.size() - 1) {
        		if(op == '-')
        			nums.push(-num);
        		else if(op == '+')
        			nums.push(num);
        		else {
        			if(op == '*') 
        				num = nums.top()*num;
        			else
        				num = nums.top()/num;
        			nums.pop();
        			nums.push(num);
        		}
        		op = s[i];
        		num = 0;
        	}
        }
        while(!nums.empty()) {
        	sum += nums.top();
        	nums.pop();
        }
        return sum;
    }
};