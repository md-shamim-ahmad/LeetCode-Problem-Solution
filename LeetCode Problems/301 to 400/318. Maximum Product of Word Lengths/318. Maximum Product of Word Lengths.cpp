vector<int> ch(256);
class Solution {
public:
    void setLetters(string a) {
        ch.clear();
        for (int i = 0; i < 256; i++)
            ch[i] = 0;
        for (int i = 0; i < a.size(); i++) {
            ch[a[i] - 'a']++;
        }
    }
    bool notCommontLetter(string b) {
        for (int i = 0; i < b.size(); i++) {
            if (ch[b[i] - 'a'] > 0) {
                return false;
            }
        }
        return true;
    }
    int maxProduct(vector<string> &words) {
        sort(words.begin(), words.end());
        int n = words.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            setLetters(words[i]);
            for (int j = i + 1; j < n; j++) {
                if (notCommontLetter(words[j]) == true) {
                    ans = max(ans, (int) (words[i].size() * words[j].size()));
                }
            }
        }
        return ans;
    }
};