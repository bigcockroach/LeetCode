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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if(root == nullptr)
        	return result;
        TreeNode* pre = root;
        queue<TreeNode*> tmp;
        tmp.push(pre);
        while(!tmp.empty()) {
        	int cnt = tmp.size();
        	for(int i = 0; i < cnt; i++) {
        		TreeNode* cur = tmp.front();
        		tmp.pop();
        		if(cur->left)
        			tmp.push(cur->left);
        		if(cur->right)
        			tmp.push(cur->right);
        		if(i == cnt - 1)
        			result.push_back(cur->val);
        	}
        }
        return result;
    }
};