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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        	return head;
        ListNode** cur = &head;
        while(*cur != nullptr) {
        	if((*cur)->next != nullptr && (*cur)->val == (*cur)->next->val) {
        		ListNode* tmp = *cur;
        		while(tmp != nullptr && (*cur)->val == tmp->val)
        			tmp = tmp->next;
        		*cur = tmp;
        	}
        	else
        		cur = &((*cur)->next);
        }
        return head;
        // if(head == nullptr)
        // 	return nullptr;
        // ListNode* pre_head = new ListNode(0);
        // pre_head->next = head;
        // ListNode* pre = pre_head;
        // ListNode* cur = head;
        // while(cur != nullptr) {
        // 	if(cur->next == nullptr) {
        // 		if(pre->next == cur) {
        // 			cur = cur->next;
        // 		}
        // 		else {
        // 			pre->next = nullptr;
        // 			cur = cur->next;
        // 		}
        // 	}
        // 	else {
        // 		if(cur->next->val == cur->val) {
        // 			cur = cur->next;
        // 		}
        // 		else {
        // 			if(pre->next == cur) {
        // 				pre = cur;
        // 				cur = cur->next;
        // 			}
        // 			else {
        // 				pre->next = cur->next;
        // 				cur->next = nullptr;
        // 				cur = pre->next;
        // 			}
        // 		}
        // 	}
        // }
        // return pre_head->next;
    }
};