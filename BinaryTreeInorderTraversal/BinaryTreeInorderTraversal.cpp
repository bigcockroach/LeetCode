#include <vector>
#include <stack>

using namespace std;

/**
* Definition for a binary tree node.
*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		stack<TreeNode*> tmp;
		vector<int> result;
		if (root == nullptr)
			return result;
		while (true) {
			while (root != nullptr) {
				tmp.push(root);
				root = root->left;
			}
			if (tmp.empty())
				return result;
			TreeNode* node = tmp.top();
			tmp.pop();
			result.push_back(node->val);
			root = node->right;
		}
	}
};