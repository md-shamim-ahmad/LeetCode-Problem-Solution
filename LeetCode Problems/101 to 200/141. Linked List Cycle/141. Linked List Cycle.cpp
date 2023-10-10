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
    bool hasCycle(ListNode *head) {
        // Initialize two pointers: fast and slow, and assign them to the head of the list.
        ListNode *fast = head;
        ListNode *slow = head;

        // Traverse the list until fast and fast->next are not NULL.
        // Increment fast by 2 steps and slow by 1 step in each iteration.
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;

            // If fast and slow are at the same address, this means the linked list has a cycle.
            if (fast == slow) {
                return true;
            }
        }

        // If the traversal reaches NULL, this means there is no cycle.
        return false;
    }
};
