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
	// iteratively 
	ListNode* reverseList_1(ListNode* head) {
		if (head == nullptr)
			return head;
		ListNode* pre = nullptr;
		ListNode* cur = head;
		while (cur != nullptr) {
			ListNode* tmp = cur->next;
			cur->next = pre;
			pre = cur;
			cur = tmp;
		}
		return pre;
	}
	// recursively
	ListNode* reverseList_2(ListNode* head) {
		if (head == nullptr || head->next == nullptr)
			return head;
		ListNode* newHead = reverseList_2(head->next);
		head->next->next = head;
		head->next = nullptr;
		return newHead;
	}
};