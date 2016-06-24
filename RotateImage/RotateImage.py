class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: void Do not return anything, modify matrix in-place instead.
        """
        for i in range(len(matrix) / 2):
            last = len(matrix) - 1 - i
            for j in range(i, last):
                offset = j - i
                top = matrix[i][j] # save top
                # left -> top
                matrix[i][j] = matrix[last - offset][i]
                # bottom -> left
                matrix[last - offset][i] = matrix[last][last - offset]
                # right -> bottom
                matrix[last][last - offset] = matrix[j][last]
                # top -> right
                matrix[j][last] = top