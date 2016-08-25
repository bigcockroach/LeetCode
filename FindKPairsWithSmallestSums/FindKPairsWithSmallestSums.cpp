class Solution {
public:
    vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int, int>> result;
        if(nums1.size() == 0 || nums2.size() == 0 || k < 0)
        	return result;
        auto myCmp = [&nums1, &nums2](pair<int, int> p1, pair<int, int> p2) {
        	return nums1[p1.first] + nums2[p1.second] > nums1[p2.first] + nums2[p2.second];
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(myCmp)> q(myCmp);
        q.push(make_pair(0,0));
        while(k-- && !q.empty()) {
        	pair<int, int> q_top = q.top();
        	q.pop();
        	result.push_back(make_pair(nums1[q_top.first], nums2[q_top.second]));
        	if(q_top.first + 1 < nums1.size())
        		q.push(make_pair(q_top.first + 1, q_top.second));
        	if(q_top.first == 0 && q_top.second + 1 < nums2.size())
        		q.push(make_pair(q_top.first, q_top.second + 1));
        }
        return result;
    }
};