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
	bool hasPathSum(TreeNode* root, int sum) {
		if (root == nullptr)
			return false;
		if (root->left == nullptr && root->right == nullptr && root->val == sum)
			return true;
		else {
			bool left =  hasPathSum(root->left, sum - root->val);
			bool right =  hasPathSum(root->right, sum - root->val);
			return left | right;
		}
	}
};