#include<stack>
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

/*Solution 1 recursively  with or without reversal the sub-tree both can acceptd*/
class Solution1 {
public:
	bool isSymmetric(TreeNode* root) {
		if (root == nullptr)
			return true;
		//invertTree(root->right);
		return isSameVal(root->left, root->right);
	}

private:
	/*
	void invertTree(TreeNode* root) {
		if (root == nullptr)
			return;
		TreeNode* tmp = root->left;
		root->left = root->right;
		root->right = tmp;
		invertTree(root->left);
		invertTree(root->right);
		return;
	}
	*/

	bool isSameVal(TreeNode* left, TreeNode* right) {
		if ((left == nullptr && right != nullptr) || (left != nullptr && right == nullptr))
			return false;
		else if (left == nullptr && right == nullptr)
			return true;
		else if (left->val != right->val)
			return false;
		else {
			return isSameVal(left->left, right->right) & isSameVal(left->right, right->left);
		}
	}
};

/* iteratively using stack to store the nodes */
class Solution2 {
public:
	bool isSymmetric(TreeNode* root) {
		TreeNode* left = nullptr;
		TreeNode* right = nullptr;
		if (root == nullptr)
			return true;
		stack<TreeNode*> qleft, qright;
		qleft.push(root->left);
		qright.push(root->right);
		while (!qleft.empty() && !qright.empty()) {
			left = qleft.top();
			qleft.pop();
			right = qright.top();
			qright.pop();
			if (left == nullptr && right == nullptr)
				continue;
			if (left == nullptr || right == nullptr)   // left and right will not be nullptr at the same time because we check before
				return false;
			if (left->val != right->val)
				return false;
			qleft.push(left->left);
			qleft.push(left->right);
			qright.push(right->right);
			qright.push(right->left);
		}
		return true;
	}
};