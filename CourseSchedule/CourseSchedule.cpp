class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<vector<int>> graph(numCourses, vector<int>(0));
        vector<int> visited(numCourses, 0);
        for(auto &i : prerequisites) {
        	graph[i.first].push_back(i.second);
        }
        for(int i = 0; i < numCourses; i++) {
        	if(!crourseDFS(graph, visited, i))
        		return false;
        }
        return true;
    }
private:
	bool crourseDFS(vector<vector<int>> &graph, vector<int> &visited, int i) {
		if(visited[i] == -1)
			return false;
		if(visited[i] == 1)
			return true;
		visited[i] = -1;
		for(auto j : graph[i]) {
			if(!crourseDFS(graph, visited, j))
				return false;
		}
		visited[i] = 1;
		return true;
	}
};