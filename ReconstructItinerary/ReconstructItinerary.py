class Solution(object):
    def findItinerary(self, tickets):
        """
        :type tickets: List[List[str]]
        :rtype: List[str]
        """
        dic = {}
        for i, j in sorted(tickets)[::-1]:
            dic[i] = dic.get(i, []) + [j]
        result = []
        def findItineraryDFS(start):
            while start in dic.keys() and dic[start]:
                findItineraryDFS(dic[start].pop())
            result.append(start)
        findItineraryDFS('JFK')
        return result[::-1]