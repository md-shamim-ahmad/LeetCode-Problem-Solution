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
// ListNode *temp2 = new ListNode;
class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        if (!head || !head->next)
            return head;
        ListNode *reverse = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return reverse;
    }
};