class Solution {
public:
    string reverseOnlyLetters(string s) {
        string rev_s = "";
        stack<char> que;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                que.push(s[i]);
            }
        }
        for (int i = 0, j = 0; i < s.size(); i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                rev_s += que.top();
                que.pop();
            } else {
                rev_s += s[i];
            }
        }
        return rev_s;
    }
};