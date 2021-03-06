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
    void flatten(TreeNode* root) {
        if(root == nullptr)
        	return;
        TreeNode* now = root;
        while(now != nullptr) {
        	if(now->left != nullptr) {
        		TreeNode* pre = now->left;
        		while(pre->right) {
        			pre = pre->right;
        		}
        		pre->right = now->right;
        		now->right = now->left;
        		now->left = nullptr;
        	}
        	now = now->right;
        }
    }
};