/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        TreeNode* node = root;
        while(node != nullptr) {
        	nodes.push(node);
        	node = node->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !nodes.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* node = nodes.top();
        nodes.pop();
        TreeNode* newNode = node->right;
    	while(newNode != nullptr) {
    		nodes.push(newNode);
    		newNode = newNode->left;
    	}
        return node->val;
    }
private:
	stack<TreeNode*> nodes;
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */