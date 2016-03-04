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
	int maxDepth(TreeNode* root) {
		int max = 0;
		if (root == nullptr) {
			return max;
		}
		DFS(root, 0, max);
		return max;
	}
private:
	void DFS(TreeNode* root, int count, int& max) {
		if (root != nullptr) {
			DFS(root->left, count + 1, max);
			DFS(root->right, count + 1, max);
		}
		if (count > max) {
			max = count;
		}
	}
};