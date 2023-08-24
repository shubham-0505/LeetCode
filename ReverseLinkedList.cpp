class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }
    
        ListNode* reversed = reverseList(head->next);
        
        head->next->next = head;
        head->next = NULL;
        
        return reversed; 
    }
};
