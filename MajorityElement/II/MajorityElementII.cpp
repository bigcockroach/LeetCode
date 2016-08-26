class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int m = 0, n = 1, counter_m = 0, counter_n = 0;
        for(auto i : nums) {
        	if(i == m) {
        		counter_m++;
        	}
        	else if(i == n) {
        		counter_n++;
        	}
        	else if(counter_m == 0) {
        		m = i;
        		counter_m = 1;
        	}
        	else if(counter_n == 0) {
        		n = i;
        		counter_n = 1;
        	}
        	else {
        		counter_n--;
        		counter_m--;
        	}
        }
        counter_m = counter_n = 0;
        for(auto i : nums) {
        	if(i == m)
        		counter_m++;
        	else if(i == n)
        		counter_n++;
        }
        vector<int> result;
        if(counter_m > nums.size() / 3)
        	result.push_back(m);
        if(counter_n > nums.size() / 3)
        	result.push_back(n);
        return result;
    }
};