class Solution {
    ListNode *reverse_it(ListNode *head) {
        ListNode *prev = NULL;
        ListNode *curr = head, *next;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    ListNode *removeNodes(ListNode *head) {
        head = reverse_it(head);
        int mx = (head)->val;
        ListNode *prev = head;
        ListNode *curr = (head)->next;
        while (curr != NULL) {
            if (curr->val < mx) {
                ListNode *temp = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete temp;
            } else {
                mx = max(mx, curr->val);
                prev = curr;
                curr = curr->next;
            }
        }
        head = reverse_it(head);
        return head;
    }
};
