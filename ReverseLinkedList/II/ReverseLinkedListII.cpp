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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head == nullptr)
        	return head;
        ListNode* pre_head = new ListNode(0);
    	pre_head->next = head;
    	ListNode* pre = pre_head;
    	for(int i = 0; i < m - 1; i++) {
    		pre = pre->next;
    	}
    	ListNode* start = pre->next;
    	ListNode* next_start = start->next;
    	for(int i = 0; i < n - m; i++) {
    		start->next = next_start->next;
    		next_start->next = pre->next;
    		pre->next = next_start;
    		next_start = start->next;
    	}
    	return pre_head->next;
    }	
};