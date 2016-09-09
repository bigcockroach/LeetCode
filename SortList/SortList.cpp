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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        	return head;
        ListNode* f = head->next;
        ListNode* s = head;
        while(f != nullptr && f->next != nullptr) {
        	f = f->next->next;
        	s = s->next;
        }
        ListNode* h2 = s->next;
        s->next = nullptr;
        return merge(sortList(head), sortList(h2));
    }
private:
	ListNode* merge(ListNode* h1, ListNode* h2) {
		ListNode* preH = new ListNode(0);
		ListNode* n = preH;
		while(h1 != nullptr || h2 != nullptr) {
			if(h1 != nullptr && (h2 == nullptr || h1->val <= h2->val)) {
				n->next = h1;
				h1 = h1->next;
				n = n->next;
			}
			else if(h2 != nullptr && (h1 == nullptr || h1->val > h2->val)) {
				n->next = h2;
				h2 = h2->next;
				n = n->next;
			}
		}
		n->next = nullptr;
		return preH->next;
	}
};