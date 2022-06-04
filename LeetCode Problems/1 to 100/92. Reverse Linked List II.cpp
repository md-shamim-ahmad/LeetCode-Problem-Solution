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
    void insert(ListNode** head, int value) {
        ListNode* temp = new ListNode;
        temp->val = value;
        temp->next = *head;
        *head = temp;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {    
        vector<int> arr;
        while(head) {
            arr.push_back(head->val);
            head = head->next;            
        }
        left -= 1, right -= 1;
        while(left <= right) {
            swap(arr[left], arr[right]);
            left++, right--;
        }
        head = nullptr;
        for (int i = arr.size() - 1; i >= 0; i--) {
            insert(&head, arr[i]);
        }
        return head;
    }
};