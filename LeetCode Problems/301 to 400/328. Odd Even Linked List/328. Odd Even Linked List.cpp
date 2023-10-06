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
    ListNode *oddEvenList(ListNode *head) {
        ListNode *even = new ListNode(), *evenList = even;
        ListNode *odd = new ListNode(), *oddList = odd;
        int track = 1;
        while (head != nullptr) {
            if (track == 1) {
                track = 2;
                odd->next = head;
                odd = odd->next;
            } else {
                track = 1;
                even->next = head;
                even = even->next;
            }
            head = head->next;
            even->next = odd->next = nullptr;
        }
        odd->next = evenList->next;
        return oddList->next;
    }
};