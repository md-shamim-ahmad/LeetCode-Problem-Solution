class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        bool check = true;
        int i = 0, j = 0;
        for (; i < word1.size() && j < word2.size();) {
            if (check) {
                str += word1[i++];
                check = false;
            } else {
                str += word2[j++];
                check = true;
            }
        }
        for (; i < word1.size(); i++)
            str += word1[i];
        for (; j < word2.size(); j++)
            str += word2[j];

        return str;
    }
};