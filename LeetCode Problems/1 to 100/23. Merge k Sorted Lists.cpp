class Solution {
    ListNode *head;
public:
    void merge(int data) {
        ListNode *curr = head, *prev = nullptr, *newNode = new ListNode();
        while (curr->next != nullptr) {
            if (curr->val > data)
                break;
            prev = curr;
            curr = curr->next;
        }
        newNode->val = data;
        if (curr != nullptr && curr->val < data) {
            prev = curr;
            prev->next = newNode;
        } else {
            if (prev == nullptr) {
                newNode->next = curr;
                head = newNode;
            } else {
                newNode->next = curr;
                prev->next = newNode;
            }
        }        
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        for (int i = 0; i < lists.size(); i++) {
            if (head == nullptr) {
                head = lists[i];
            } else {
                ListNode *temp = lists[i];
                while(temp != nullptr) {
                    merge(temp->val);
                    temp = temp->next;
                }
            }
        }
        return head;
    }
};