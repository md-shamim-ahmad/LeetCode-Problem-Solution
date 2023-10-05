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
    ListNode *swapNodes(ListNode *head, int k) {
        vector<ListNode *> arr;
        ListNode *temp = head;
        while (temp != nullptr) {
            arr.push_back(temp);
            temp = temp->next;
        }
        int tmp = arr[k - 1]->val;
        arr[k - 1]->val = arr[arr.size() - k]->val;
        arr[arr.size() - k]->val = tmp;
        return head;
    }
};