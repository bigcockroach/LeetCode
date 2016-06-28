class Solution(object):
    def gameOfLife(self, board):
        """
        :type board: List[List[int]]
        :rtype: void Do not return anything, modify board in-place instead.
        """
        if len(board) == 0:
        	return
        m = len(board)
        n = len(board[0])
        for i in xrange(m):
        	for j in xrange(n):
        		count = 0
        		for x in xrange(max(i - 1, 0), min(i + 2, m)):
        			for y in xrange(max(j - 1, 0), min(i + 2, m)):
        				count += board[x][y] & 1
        		if count == 3 or count - board[i][j] == 3:
        			count |= 2
        for i in xrange(m):
        	for j in xrange(n):
        		board[i][j] >>= 1