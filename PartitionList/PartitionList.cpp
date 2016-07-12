/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head == nullptr || head->next == nullptr)
        	return head;
        ListNode* new_head = new ListNode(0);
        ListNode* pre = new_head;
        new_head->next = head;
        ListNode* cur = head;
        ListNode* tail = head;
        int count = 0;
        while(tail->next) {
        	tail = tail->next;
        	count++;
        }
        while(count >= 0) {
        	if(cur->val >= x && cur != tail) {
        		pre->next = cur->next;
        		tail->next = cur;
        		cur->next = nullptr;
        		tail = cur;
        		cur = pre->next;
        	}
        	else {
        		pre = cur;
        		cur = cur->next;
        	}
        	count--;
        }
        return new_head->next;
    }
};