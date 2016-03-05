#include<cmath>
#include<algorithm>

using namespace std;
/**
* Definition for a binary tree node.
*/ 
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

/* Solution 1 time O(N) space O(logN)*/
class Solution1 {
public:
	bool isBalanced(TreeNode* root) {
		if (checkHight(root) == -1)
			return false;
		else
			return true;
	}

private:
	int checkHight(TreeNode* root) {
		if (root == nullptr)
			return 0;
		int leftHight = checkHight(root->left);
		if (leftHight == -1)
			return -1;

		int rightHight = checkHight(root->right);
		if (rightHight == -1)
			return -1;

		int diff = leftHight - rightHight;
		if (abs(diff) > 1)
			return -1;
		else
			return max(leftHight, rightHight);
	}
};

/*Solution 2 time(NlogN) space(logN)*/
class Solution2 {
public:
	bool isBalanced(TreeNode* root) {
		if (root == nullptr)
			return true;
		int leftHight = getDeph(root->left, 1);
		int rightHight = getDeph(root->right, 1);
		
		if (abs(leftHight - rightHight) > 1)
			return false;
		else
			return isBalanced(root->left) & isBalanced(root->right);
	}

private:
	int getDeph(TreeNode* root, int curHight) {
		if (root == nullptr)
			return curHight;
		else
			return max(getDeph(root->left, curHight), getDeph(root->right, curHight));
	}
};