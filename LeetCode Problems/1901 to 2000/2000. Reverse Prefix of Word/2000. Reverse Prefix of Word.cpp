class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        bool check = true;
        for (int i = 0; i < word.size(); i++) {
            ans += word[i];
            if (word[i] == ch && check == true) {
                reverse (ans.begin(), ans.end());
                check = false;
            }
        }
        return ans;
    }
};