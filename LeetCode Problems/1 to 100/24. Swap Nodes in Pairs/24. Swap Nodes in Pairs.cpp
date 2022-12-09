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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        while (temp != nullptr) {
            if(temp->next != nullptr) {
                swap(temp->val, temp->next->val);
                temp = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};
