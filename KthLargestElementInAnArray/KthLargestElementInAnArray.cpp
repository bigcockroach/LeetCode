class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0, right = nums.size() - 1;
        while(left < right) {
        	int L = left, R = right;
        	int key = nums[L];
        	while(L < R) {
        		while(nums[R] < key && L < R)
        			R--;
        		nums[L] = nums[R];
        		while(nums[L] >= key && L < R)
        			L++;
        		nums[R] = nums[L];
        	}
        	nums[L] = key;
        	if(L == k - 1)
        		return nums[k - 1];
        	else if(L > k - 1)
        		right = L - 1;
        	else
        		left = L + 1;
        }
        return nums[k - 1];
    }
};