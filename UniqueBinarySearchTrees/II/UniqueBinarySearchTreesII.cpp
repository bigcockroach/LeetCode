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
    vector<TreeNode*> generateTrees(int n) {
        if(n == 0)
        	return vector<TreeNode*>();
        return buildBFS(1, n + 1);
    }
private:
	vector<TreeNode*> buildBFS(int start, int end) {
		vector<TreeNode*> result;
		if(start == end) {
			result.push_back(0);
			return result;
		}
		for(int i = start; i < end; i++) {
			vector<TreeNode*> LEFT = buildBFS(start, i);
			vector<TreeNode*> RIGHT = buildBFS(i + 1, end);
			for(int l = 0; l < LEFT.size(); l++) {
				for(int r = 0; r < RIGHT.size(); r++) {
					TreeNode* node = new TreeNode(i);
					node->left = LEFT[l];
					node->right = RIGHT[r];
					result.push_back(node);
				}
			}
		}
		return result;
	}
};