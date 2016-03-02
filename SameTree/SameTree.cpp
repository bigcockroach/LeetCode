/**
* Definition for a binary tree node.
*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (p == nullptr && q == nullptr)
			return true;
		else if (p == nullptr && q != nullptr)
			return false;
		else if (p != nullptr && q == nullptr)
			return false;
		else
		{
			if (q->val != p->val)
				return false;
			else
			{
				bool left = isSameTree(p->left, q->left);
				bool right = isSameTree(p->right, q->right);
				return left & right;
			}
		}
	}
};