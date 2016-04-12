#include <vector>
#include <string>

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
	vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> result;
		if (root == nullptr)
			return result;
		string tmp = to_string(root->val);
		DFS(root, result, tmp);
		return result;
	}

private:
	void DFS(TreeNode* node, vector<string> &result, string path) {
		if (node->left) {
			DFS(node->left, result, path + "->" + to_string(node->left->val));
		}
		if (node->right) {
			DFS(node->right, result, path + "->" + to_string(node->right->val));
		}
		if (!node->left && !node->right) {
			result.push_back(path);
			return;
		}
	}
};