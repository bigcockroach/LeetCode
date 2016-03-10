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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (headA == nullptr || headB == nullptr)
			return nullptr;
		int A_length = 0, B_length = 0, diff = 0;
		ListNode* tmpA = headA, *tmpB = headB;
		while (tmpA != nullptr) {
			A_length++;
			tmpA = tmpA->next;
		}
		tmpA = headA;
		while (tmpB != nullptr) {
			B_length++;
			tmpB = tmpB->next;
		}
		tmpB = headB;
		if (B_length > A_length) {
			diff = B_length - A_length;
			while (diff > 0) {
				tmpB = tmpB->next;
				diff--;
			}
		}
		else {
			diff = A_length - B_length;
			while (diff > 0) {
				tmpA = tmpA->next;
				diff--;
			}
		}
		while (tmpA != nullptr) {
			if (tmpA->val == tmpB->val)
				return tmpA;
			tmpA = tmpA->next;
			tmpB = tmpB->next;
		}
		return nullptr;
	}
	
	// Better but it's hard to think
	ListNode *getIntersectionNode2(ListNode *headA, ListNode *headB) {
		ListNode *p1 = headA;
		ListNode *p2 = headB;
		if (p1 == nullptr || p2 == nullptr)
			return nullptr;
		while (p1 != nullptr && p2 != nullptr && p1 != p2) {
			p1 = p1->next;
			p2 = p2->next;
			if (p1 == p2)
				return p1;
			if (p1 == nullptr)
				p1 = headB;
			if (p2 == nullptr)
				p2 = headA;
		}
		return p1;
	}
};