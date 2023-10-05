class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};
        vector<string> str{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> comb;
        if (digits.size() == 1) {
            string s = str[digits[0] - '0' - 2];
            for (int i = 0; i < s.size(); i++) {
                string word;
                word.push_back(s[i]);
                comb.push_back(word);
            }
        } else if (digits.size() == 2) {
            string s1 = str[digits[0] - '0' - 2];
            string s2 = str[digits[1] - '0' - 2];
            for (int i = 0; i < s1.size(); i++) {
                for (int j = 0; j < s2.size(); j++) {
                    string word;
                    word.push_back(s1[i]);
                    word.push_back(s2[j]);
                    comb.push_back(word);
                }
            }
        } else if (digits.size() == 3) {
            string s1 = str[digits[0] - '0' - 2];
            string s2 = str[digits[1] - '0' - 2];
            string s3 = str[digits[2] - '0' - 2];
            for (int i = 0; i < s1.size(); i++) {
                for (int j = 0; j < s2.size(); j++) {
                    for (int k = 0; k < s3.size(); k++) {
                        string word;
                        word.push_back(s1[i]);
                        word.push_back(s2[j]);
                        word.push_back(s3[k]);
                        comb.push_back(word);
                    }
                }
            }
        } else {
            string s1 = str[digits[0] - '0' - 2];
            string s2 = str[digits[1] - '0' - 2];
            string s3 = str[digits[2] - '0' - 2];
            string s4 = str[digits[3] - '0' - 2];
            for (int i = 0; i < s1.size(); i++) {
                for (int j = 0; j < s2.size(); j++) {
                    for (int k = 0; k < s3.size(); k++) {
                        for (int l = 0; l < s4.size(); l++) {
                            string word;
                            word.push_back(s1[i]);
                            word.push_back(s2[j]);
                            word.push_back(s3[k]);
                            word.push_back(s4[l]);
                            comb.push_back(word);
                        }
                    }
                }
            }
        }
        return comb;
    }
};
