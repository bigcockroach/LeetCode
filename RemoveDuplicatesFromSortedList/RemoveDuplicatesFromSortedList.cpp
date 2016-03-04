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
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == nullptr || head->next == nullptr)
			return head;
		ListNode* cur = head;
		ListNode* tmp = cur->next;
		while (cur != nullptr) {
			if (tmp == nullptr) {
				cur->next = tmp;
				cur = cur->next;
			}
			else {
				if (cur->val == tmp->val)
					tmp = tmp->next;
				else
				{
					cur->next = tmp;
					cur = tmp;
				}
			}
			
		}
		return head;
	}
};