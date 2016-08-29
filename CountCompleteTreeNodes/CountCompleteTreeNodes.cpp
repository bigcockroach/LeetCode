/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == nullptr)
        	return 0;
        int l = LeftHeight(root);
        int r = RightHeight(root);
        if(l == r)
        	return (2 << l) - 1;
        else
        	return countNodes(root->left) + countNodes(root->right) + 1;
    }
private:
	int LeftHeight(TreeNode* node) {
		int h = 0;
		while(node->left != nullptr) {
			h++;
			node = node->left;
		}
		return h;
	}

	int RightHeight(TreeNode* node) {
		int h = 0;
		while(node->right != nullptr) {
			h++;
			node = node->right;
		}
		return h;
	}
};