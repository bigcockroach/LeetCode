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
    int kthSmallest(TreeNode* root, int k) {
        int count = countLeftNode(root->left);
        if(k < count + 1)
        	return kthSmallest(root->left, k);
        else if(k > count + 1)
        	return kthSmallest(root->right, k - 1 - count);
        else
        	return root->val;
    }
private:
	int countLeftNode(TreeNode* Node) {
		if(Node == nullptr)
			return 0;
		return 1 + countLeftNode(Node->left) + countLeftNode(Node->right);
	}
};