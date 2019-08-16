class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* middle = head;
        
        while (1) {
            if (head -> next) {
                head = head -> next;
            } else {
                return middle;
            }
            
            middle = middle -> next;
            
            if (head -> next) {
                head = head -> next;
            }
        }
        
        return NULL;
    }
};
