class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int>::size_type Stations = gas.size();
        int total = 0, sum = 0, start = 0;
        for(vector<int>::size_type i = 0; i < Stations; i++) {
        	total += gas[i] - cost[i];
        	if(sum < 0) {
        		sum = gas[i] - cost[i];
        		start = i;
        	}
        	else
        		sum += gas[i] - cost[i];
        }
        if(total < 0)
        	return -1;
        else
        	return start;
    }
};