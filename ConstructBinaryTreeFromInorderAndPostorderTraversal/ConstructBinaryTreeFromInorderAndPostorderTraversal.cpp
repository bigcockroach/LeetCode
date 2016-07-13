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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> inorder_map;
        for(int i = 0; i < inorder.size(); i++) {
        	inorder_map[inorder[i]] = i;
        }
        TreeNode* root = BFS(0, inorder.size() - 1, postorder, 0, postorder.size() - 1, inorder_map);
        return root;
    }
private:
	TreeNode* BFS(int i_begin, int i_end, vector<int>& postorder, int p_begin, int p_end, unordered_map<int, int>& inorder_map) {
		if(i_begin > i_end || p_begin > p_end)
			return nullptr;
		TreeNode* node = new TreeNode(postorder[p_end]);
		int index = inorder_map.find(postorder[p_end])->second;
		int l = index - i_begin;
		node->left = BFS(i_begin, i_begin + l - 1, postorder, p_begin, p_begin + l - 1, inorder_map);
		node->right = BFS(i_begin + l + 1, i_end, postorder, p_begin + l, p_end - 1, inorder_map);
		return node;
	}
};