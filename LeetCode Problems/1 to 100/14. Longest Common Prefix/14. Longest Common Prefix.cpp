class Solution {
public:
    struct node {
        char info;
        int cnt;
        node *list[26];
    };
    node *newNode(char info) {
        node *temp = new node();
        temp->cnt = 0;
        temp->info = info;
        return temp;
    }
    void insert(node *&head, string s) {
        node *temp = head;
        for (int i = 0; i < s.size(); i++) {
            int index = (int) s[i] - 'a';
            if (!temp->list[index]) {
                temp->list[index] = newNode(s[i]);
            }
            temp = temp->list[index];
        }
        temp->cnt = 1;
    }
    void display(node *root) {
        if (!root)
            return;
        node *temp = root;
        cout << temp->info << " " << temp->cnt << '\n';
        for (int i = 0; i < 26; i++)
            display(temp->list[i]);
    }
    int countChild(node *temp, int &index) {
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            if (temp->list[i] != nullptr) {
                cnt++;
                index = i;
            }
        }
        return cnt;
    }
    string longestCommonPrefix(vector<string> &strs) {
        node *head = new node();
        for (int i = 0; i < strs.size(); i++) {
            insert(head, strs[i]);
        }
        node *curr = head;
        string lcp;
        int index;
        while (!curr->cnt && countChild(curr, index) == 1) {
            curr = curr->list[index];
            lcp += 'a' + index;
        }
        return lcp;
    }
};
