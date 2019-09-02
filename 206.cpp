class Solution {
public:
    ListNode* reverseList(ListNode* head, ListNode* prev = NULL) {
        if (!head) {
            return prev;
        }
        ListNode* next = head -> next;
        head -> next = prev;
        return reverseList(next, head);
    }
};
