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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    	vector<vector<int>> result;
    	bool flag = true;
    	buildZZTree(root, result, flag, 0);
    	return result;    
    }
private:
	void buildZZTree(TreeNode* node, vector<vector<int>> &result, bool flag, int depth) {
		if(node == nullptr)
			return;
		if(result.size() <= depth)
			result.push_back(vector<int>(0,0));
		if(flag == false)
			result[depth].insert(result[depth].begin(), node->val);
		else
			result[depth].push_back(node->val);
		buildZZTree(node->left, result, !flag, depth + 1);
		buildZZTree(node->right, result, !flag, depth + 1);
		return;
	}

};