/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root == NULL)
        	return;
        // pre control the node from top to the end,
        // cur control the node from left to right at every level
        TreeLinkNode* pre = root;
        TreeLinkNode* cur = nullptr;
        while(pre->left != nullptr) {
        	cur = pre;
        	while(cur != nullptr) {
        		cur->left->next = cur->right;
        		if(cur->next != nullptr)
        			cur->right->next = cur->next->left;
        		cur = cur->next;
        	}
        	pre = pre->left;
        }
        return;
    }
};