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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inorder_map;
        for(int i = 0; i < inorder.size(); i++) {
        	inorder_map[inorder[i]] = i;
        }
        TreeNode* root =  build(preorder, 0, preorder.size() - 1, 0, inorder.size() - 1, inorder_map);
        return root;
    }
private:
	TreeNode* build(vector<int>& preorder, int p_begin, int p_end, int i_begin, int i_end, unordered_map<int, int>& inorder_map) {
    	if(i_begin > i_end || p_begin > p_end)
    		return nullptr;
    	TreeNode* node = new TreeNode(preorder[p_begin]);
    	int index = inorder_map.find(preorder[p_begin])->second;
    	int l = index - i_begin;
    	node->left = build(preorder, p_begin + 1, p_begin + l, i_begin, i_begin + l - 1, inorder_map);
    	node->right = build(preorder, p_begin + l + 1, p_end, i_begin + l + 1, i_end, inorder_map);
    	return node;
    }
};