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
    int size(ListNode* temp) {
        int cnt = 0;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = size(head);        
        int split = n / k, left = n % k;
        vector<ListNode*> splitList(k);
        ListNode* prev = nullptr;
        for (int i = 0; i < k; i++) {
            splitList[i] = head;
            for (int j = 0; j < split + (i < left); j++) {
                prev = head;
                head = head->next;
            }
            if (prev) 
                prev->next = nullptr;
        }
        return splitList;
    }
};
