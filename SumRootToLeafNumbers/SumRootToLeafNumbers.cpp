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
    int sumNumbers(TreeNode* root) {
        if(root == nullptr)
        	return 0;
        vector<int> subSums;
        getSum(root, root->val, subSums);
        int result = 0;
        for(int i = 0; i < subSums.size(); i++) {
        	result += subSums[i];
        }
        return result;
    }
private:
	void getSum(TreeNode* node, int subSum, vector<int> &sumSums) {
		if(node->left == nullptr && node->right == nullptr) {
			sumSums.push_back(subSum);
			return;
		}
		if(node->left != nullptr)
			getSum(node->left, 10*subSum + node->left->val, sumSums);
		if(node->right != nullptr)
			getSum(node->right, 10*subSum + node->right->val, sumSums);
		return;
	}
};