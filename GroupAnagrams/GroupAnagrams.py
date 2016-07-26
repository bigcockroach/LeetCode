class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        dic = {}
        for s in strs:
            dic[tuple(sorted(s))] = dic.get(tuple(sorted(s)), []) + [s]
        return [sorted(item) for item in dic.values()]