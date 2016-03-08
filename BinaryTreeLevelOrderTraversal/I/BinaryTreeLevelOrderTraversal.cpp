#include<vector>
#include<algorithm>
using namespace std;

/*
Definition for a binary tree node.
*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		int d = depth(root);
		vector<vector<int>> result(d, vector<int>());
		if (root == nullptr)
			return result;
		DFS(root, 0, result);
		return result;
	}

private:
	int depth(TreeNode* node) {
		if (node == nullptr)
			return 0;
		return max(depth(node->left), depth(node->right)) + 1;
	}
	void DFS(TreeNode* node, int level, vector<vector<int>> &result) {
		if (node == nullptr)
			return;
		result[level].push_back(node->val);
		DFS(node->left, level + 1, result);
		DFS(node->right, level + 1, result);
	}
};