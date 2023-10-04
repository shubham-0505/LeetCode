/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *reverseList(ListNode *head){
        ListNode *p = head;
        ListNode *q = NULL;
        ListNode *r = NULL;

        while(p!=NULL){
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        head = q;
        return head;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;

        if(head==NULL || head->next==NULL){
            return true;
        }

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        slow->next = reverseList(slow->next);
        slow = slow->next;

        while(slow!=NULL){
            if(head->val != slow->val){
                return false;
            }
            else{
                head = head->next;
                slow = slow->next;
            }
        }
        return true;
    }
};
