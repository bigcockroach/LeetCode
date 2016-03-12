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
	//Solution 1 my version
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* first = head, *second = head;
		if (n == 1) {
			if (head->next == nullptr) {
				head = nullptr;
				return head;
			}
			while (first->next->next != nullptr)
				first = first->next;
			first->next = nullptr;
			return head;
		}
		while (n - 1 > 0) {
			first = first->next;
			n--;
		}
		while (first->next != nullptr) {
			first = first->next;
			second = second->next;
		}
		second->val = second->next->val;
		second->next = second->next->next;
		return head;
	}

	// use pointer point a pointer.much butter than my version
	ListNode* removeNthFromEnd2(ListNode* head, int n)
	{
		ListNode** t1 = &head, *t2 = head;
		for (int i = 1; i < n; ++i)
		{
			t2 = t2->next;
		}
		while (t2->next != nullptr)
		{
			t1 = &((*t1)->next);
			t2 = t2->next;
		}
		*t1 = (*t1)->next;
		return head;
	}
};