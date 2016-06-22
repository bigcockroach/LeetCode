# Definition for a  binary tree node
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class BSTIterator(object):
    def __init__(self, root):
        """
        :type root: TreeNode
        """
        self.nodes = []
        node = root
        while node is not None:
            self.nodes.append(node)
            node = node.left

    def hasNext(self):
        """
        :rtype: bool
        """
        return True if len(self.nodes) != 0 else False

    def next(self):
        """
        :rtype: int
        """
        node = self.nodes.pop()
        newNode = node.right
        while newNode is not None:
            self.nodes.append(newNode)
            newNode = newNode.left
        return node.val

# Your BSTIterator will be called like this:
# i, v = BSTIterator(root), []
# while i.hasNext(): v.append(i.next())