class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<pair<int, int>>& edges) {
        vector<set<int>> graph(n, set<int>());
        for(int i = 0; i < edges.size(); i++) {
        	graph[edges[i].first].insert(edges[i].second);
        	graph[edges[i].second].insert(edges[i].first);
        }
        vector<int> leaves;
        if(n == 1) {
        	leaves.push_back(0);
        	return leaves;
        }
        for(int i = 0; i < n; i++) {
        	if(graph[i].size() == 1)
        		leaves.push_back(i);
        }
        while(true) {
        	vector<int> nextStep;
        	for(int node : leaves) {
        		for(int i : graph[node]) {
        			graph[i].erase(node);
        			if(graph[i].size() == 1)
        				nextStep.push_back(i);
        		}
        	}
        	if(nextStep.empty())
        		return leaves;
        	leaves = nextStep;
        }
    }
};