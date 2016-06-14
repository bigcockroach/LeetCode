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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0)
        	return nullptr;
        TreeNode* root = new TreeNode(0);
        int left = 0;
        int right = nums.size();
        dfs(root, left, right, nums);
        return root;
    }
private:
	void dfs(TreeNode* node, int left, int right, vector<int> &nums) {
		if(left < right) {
			int mid = (left + right) / 2;
			node->val = nums[mid];
			if(left < mid) {
				node->left = new TreeNode(0);
				dfs(node->left, left, mid, nums);
			}
			if(mid + 1 < right) {
				node->right = new TreeNode(0);
				dfs(node->right, mid + 1, right, nums);
			}
		}
		return;
    }
};