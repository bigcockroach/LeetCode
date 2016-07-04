class Solution(object):
    def isValidSerialization(self, preorder):
        """
        :type preorder: str
        :rtype: bool
        """
        nullCnt = 0
        nodeCnt = 0
        preorderList = preorder.split(',')
        for i in xrange(len(preorderList)):
        	if preorderList[i] != '#':
        		nodeCnt += 1
        	else:
        		nullCnt += 1
        	if nullCnt >= nodeCnt + 1 and i != len(preorderList) - 1:
        		return False
        return nullCnt == nodeCnt + 1
