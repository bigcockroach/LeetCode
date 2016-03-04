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
	ListNode* oddEvenList(ListNode* head) {
		if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
			return head;
		int nodes_num = 0, num;
		ListNode* tail = head, *odd = head, *even = head->next;
		while (tail->next != nullptr) {
			nodes_num += 1;
			tail = tail->next;
		}
		if (nodes_num % 2 == 0)
			num = (nodes_num - 1) / 2;
		else
			num = nodes_num / 2;
		for (int i = 0; i <= num; i++) {
			odd->next = even->next;
			even->next = nullptr;
			tail->next = even;
			tail = tail->next;
			odd = odd->next;
			even = odd->next;
		}
		return head;
	}
};