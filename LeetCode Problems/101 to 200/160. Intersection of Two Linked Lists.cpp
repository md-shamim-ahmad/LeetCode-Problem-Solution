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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp = headA, *ans = nullptr;
        while (temp != nullptr) {
            temp->val = -temp->val;
            temp = temp->next;
        }        
        while (headB != nullptr) {
            if (headB->val < 0 && ans == nullptr)
                ans = headB;
            headB = headB->next;
        }
        while (headA != nullptr) {
            headA->val = abs(headA->val);
            headA = headA->next;
        }
        return ans;
    }
};