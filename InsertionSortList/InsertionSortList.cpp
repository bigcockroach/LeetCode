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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* new_list = new ListNode(0);
        ListNode* cur = head;
        while(cur != nullptr) {
        	ListNode* next = cur->next;
        	ListNode* pre = new_list;
        	while(pre->next != nullptr && pre->next->val < cur->val) {
        		pre = pre->next;
        	}
        	cur->next = pre->next;
        	pre->next = cur;
        	cur = next;
        }
        return new_list->next;
    }
};