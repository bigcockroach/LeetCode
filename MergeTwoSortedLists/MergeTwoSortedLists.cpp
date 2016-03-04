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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == nullptr && l2 == nullptr)
			return nullptr;
		ListNode pre_newhead(0);
		ListNode* node = &pre_newhead;
		while (l1 != nullptr && l2 != nullptr) {
			if (l1->val <= l2->val) {
				node->next = l1;
				l1 = l1->next;
			}
			else {
				node->next = l2;
				l2 = l2->next;
			}
			node = node->next;
		}
		if (l1 == nullptr)
			node->next = l2;
		else
			node->next = l1;
		return pre_newhead.next;
	}
};