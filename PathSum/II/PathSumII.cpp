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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> result;
        if(root == nullptr)
        	return result;
        vector<int> subSum;
        BACK(result, subSum, sum, root);
        return result;
    }
private:
	void BACK(vector<vector<int>>& result, vector<int>& subSum, int sum, TreeNode* node) {
		if(node->left == nullptr && node->right == nullptr) {
			if(sum == node->val) {
				subSum.push_back(node->val);
				result.push_back(subSum);
				subSum.pop_back();
			}
			return;
		}
		subSum.push_back(node->val);
		if(node->left)
			BACK(result, subSum, sum - node->val, node->left);
		if(node->right)
			BACK(result, subSum, sum - node->val, node->right);
		subSum.pop_back();
		return;
	}
};