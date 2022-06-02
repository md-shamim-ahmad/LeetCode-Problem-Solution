class Solution {
public:
    ListNode* list = new ListNode();
    void insert(int data) {        
        ListNode *temp = list;
        ListNode *newNode = new ListNode();
        newNode->val = data;
        while (temp->next != nullptr) {
            temp = temp->next;
        }               
        temp->next = newNode;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {        
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                insert(list1->val);
                list1 = list1->next;
            } else {
                insert(list2->val);
                list2 = list2->next;
            }
        }
        while (list1 != nullptr) {
            insert(list1->val);
            list1 = list1->next;
        }
        while (list2 != nullptr) {
            insert(list2->val);
            list2 = list2->next;
        }
        list = list->next;
        return list;
    }
};