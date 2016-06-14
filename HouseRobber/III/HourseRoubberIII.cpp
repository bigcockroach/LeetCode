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
//     int rob(TreeNode* root) {
//         int l, r;
//         return robSub(root, l, r);
//     }
// private:
// 	int robSub(TreeNode* node, int &l, int &r) {
// 		if(node == nullptr)
// 			return 0;
// 		int ll = 0, lr = 0, rl = 0, rr = 0;
// 		l = robSub(root->left, ll, lr);
// 		r = robSub(root->right, rl, rr);
// 		return max(root->val + ll + lr + rl + rr, l + r);
// 	}
	int rob(TreeNode* root) {
		vector<int> res = robSub(root);	
		return max(res[0], res[1]);
	}
private:
	vector<int> robSub(TreeNode* node) {
		if(node == nullptr)
			return vector<int>(2,0);
		vector<int> left = robSub(node->left);
		vector<int> right = robSub(node->right);

		vector<int> res(2,0);
		res[0] = node->val + left[1], right[1];
		res[1] = max(left[0], left[1]) + max(right[0], right[1]);
		return res;
	}
};