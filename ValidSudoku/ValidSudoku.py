class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        row = [[False] * 9 for i in range(10)]
        col = [[False] * 9 for i in range(10)]
        table = [[False] * 9 for i in range(10)]
        for i in range(9):
            for j in range(9):
                if board[i][j] != '.':
                    a = int(board[i][j]) - 1
                    if row[i][a] or col[j][a] or table[i / 3 * 3 + j / 3][a]:
                        return False
                    row[i][a], col[j][a], table[i / 3 * 3 + j / 3][a] = True, True, True
        return True