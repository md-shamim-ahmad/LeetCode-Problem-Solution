class Solution {
public:
    string makeGood(string s) {
        stack<char> stc;
        for (int i = 0; i < s.size(); i++) {
            if (stc.empty()) {
                stc.push(s[i]);
            } else {
                if ((stc.top() == tolower(s[i]) || stc.top() == toupper(s[i])) && stc.top() != s[i]) {
                    stc.pop();
                } else {
                    stc.push(s[i]);
                }
            }
        }
        s = "";
        while (!stc.empty()) {
            s += stc.top();
            stc.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};