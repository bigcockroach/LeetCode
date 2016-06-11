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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> tmp;
		vector<int> result;
		if (root == nullptr)
			return result;
		while (true) {
			while (root != nullptr) {
				result.push_back(root->val);
				tmp.push(root);
				root = root->left;
			}
			if (tmp.size() == 0)
				return result;
			TreeNode* node = tmp.top();
			tmp.pop();
			root = node->right;
		}
    }
};