

/**
* Definition for singly-linked list.
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		ListNode** p = &head;
		while (*p != nullptr) {
			if ((*p)->val == val) {
				*p = (*p)->next;
			}
			else {
				p = &((*p)->next);
			}
		}
		return head;
	}
};