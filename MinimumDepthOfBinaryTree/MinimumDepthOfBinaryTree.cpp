#include<limits.h>
#include<algorithm>

using namespace std;
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
	int minDepth(TreeNode* root) {
		if (root == nullptr)
			return 0;
		if (root->left == nullptr)
			return 1 + minDepth(root->right);
		if (root->right == nullptr)
			return 1 + minDepth(root->left);
		else
			return 1 + min(minDepth(root->left), minDepth(root->right));
	}
};