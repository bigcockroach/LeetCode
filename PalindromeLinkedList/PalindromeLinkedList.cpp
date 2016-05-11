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
	bool isPalindrome(ListNode* head) {
		if (head == nullptr || head->next == nullptr)
			return true;
		ListNode* slow = head, *fast = head;
		while (fast->next != nullptr && fast->next->next != nullptr) {
			slow = slow->next;
			fast = fast->next->next;
		}
		slow->next = reverseList(slow->next);
		slow = slow->next;
		while (slow != nullptr) {
			if (head->val != slow->val)
				return false;
			head = head->next;
			slow = slow->next;
		}
		return true;
	}

	ListNode* reverseList(ListNode* head) {
		ListNode *pre = nullptr;
		ListNode *cur = head;
		while (cur != nullptr) {
			ListNode* next = cur->next;
			cur->next = pre;
			pre = cur;
			cur = next;
		}
		return pre;
	}
};