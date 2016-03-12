class Solution(object):
    def computeArea(self, A, B, C, D, E, F, G, H):
        """
        :type A: int
        :type B: int
        :type C: int
        :type D: int
        :type E: int
        :type F: int
        :type G: int
        :type H: int
        :rtype: int
        """
        areA = (D-B) * (C-A)
        areB = (H-F) * (G-E)
        
        left = max(A, E)
        right = min(C, G)
        top = min(H, D)
        bottom = max(B, F)
        
        overlap = 0
        if left < right and top > bottom:
            overlap = (right-left) * (top-bottom)
        return areA+areB-overlap