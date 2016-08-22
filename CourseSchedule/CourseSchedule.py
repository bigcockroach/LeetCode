class Solution(object):
    def canFinish(self, numCourses, prerequisites):
        """
        :type numCourses: int
        :type prerequisites: List[List[int]]
        :rtype: bool
        """
        graph = [[] for _ in xrange(numCourses)]
        visited = [0 for _ in xrange(numCourses)]
        for i in prerequisites:
            graph[i[0]].append(i[1])
        for i in xrange(numCourses):
            if not crourseDFS(graph, visited, i):
                return False
        return True

def crourseDFS(graph, visited, course):
    if visited[course] == -1:
        return False
    if visited[course] == 1:
        return True
    visited[course] = -1
    for i in graph[course]:
        if not crourseDFS(graph, visited, i):
            return False
    visited[course] = 1
    return True