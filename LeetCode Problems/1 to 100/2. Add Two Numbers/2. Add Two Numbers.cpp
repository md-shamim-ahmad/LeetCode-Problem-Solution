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
private:
    ListNode *head = nullptr;
    ListNode *tail = nullptr;

public:
    int size(ListNode *temp) {
        int cnt = 0;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    void newNode(int num) {
        ListNode *temp = new ListNode;
        temp->val = num;
        temp->next = head;
        head = temp;
    }

    void insertNode(int data) {
        ListNode *newNode = new ListNode;
        newNode->val = data;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int n = size(l1);
        int m = size(l2);
        if (n < m) {
            ListNode *temp = l1;
            l1 = l2;
            l2 = temp;
        }

        int rem = 0, num = 0;
        while (l1 != nullptr) {
            if (l2 != nullptr) {
                num = l1->val + l2->val + rem;
                l2 = l2->next;
            } else {
                num = l1->val + rem;
            }
            l1 = l1->next;
            rem = num / 10;
            num %= 10;
            insertNode(num);
            // cout << num << " ";
        }
        if (rem)
            insertNode(rem);
        // cout << rem << '\n';
        return head;
    }
};
