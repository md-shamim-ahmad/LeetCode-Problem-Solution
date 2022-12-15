class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> unique;
        unique.push(s.at(0));
        for (int i = 1; i < s.size(); i++) {
            if (!unique.empty() && unique.top() == s[i]) {
                unique.pop();
                continue;
            }
            unique.push(s.at(i));
        }
        string ans = "";
        while (!unique.empty()) {
            ans += unique.top();
            unique.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};