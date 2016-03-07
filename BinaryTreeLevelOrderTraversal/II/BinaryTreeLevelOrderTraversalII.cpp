#include<vector>
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
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		int Depth = depth(root);
		vector<vector<int>> result(Depth, vector<int>());
		if (root == nullptr)
			return result;
		DFS(root, Depth - 1, result);
		return result;
	}

private:
	int depth(TreeNode* root) {
		if (root == nullptr)
			return 0;
		return max(depth(root->left), depth(root->right)) + 1;
	}

	void DFS(TreeNode* node, int leavel, vector<vector<int>> &result) {
		if (node == nullptr)
			return;
		result[leavel].push_back(node->val);
		DFS(node->left, leavel - 1, result);
		DFS(node->right, leavel - 1, result);
	}
};