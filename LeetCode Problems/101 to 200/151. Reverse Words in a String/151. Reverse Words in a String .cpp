class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string str = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                str += s[i];
            } else if (s[i] == ' ' && str.size() > 0) {
                words.push_back(str);
                str = "";
            }
        }
        if (str.size() > 0) {
            words.push_back(str);
        }
        reverse(words.begin(), words.end());
        str = words[0];
        for (int i = 1; i < words.size(); i++) {
            str += " ";
            str += words[i];
        }
        return str;
    }
};
