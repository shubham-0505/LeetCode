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
    ListNode *detectCycle(ListNode *head) {
        ListNode *p = head;
        ListNode *q = head;
        ListNode *r = head;

        if(head==NULL || head->next == NULL){
            return NULL;
        }

        while(p->next!=NULL && p->next->next!=NULL){
            q = q->next;
            p = p->next->next;

            if(p==q){
                while(q!=r){
                    q = q->next;
                    r = r->next;
                }
                return r;
            }
        }
        return NULL;
    }
};
