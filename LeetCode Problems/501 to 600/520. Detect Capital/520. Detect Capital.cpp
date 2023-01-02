class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;
        for(int i = 0; i < word.size(); i++)
            if(word[i] >= 'A' && word[i] <= 'Z')
                cnt++;
        // (cnt == word.size()) -> mean's all letters in this word are uppercase.
        // (cnt == 0) -> mean's all letters in this word are lowercase.
        // (cnt == 1 && (word[0] >= 'A' && word[0] <= 'Z') -> mean's only first letter in this word are uppercase.
        if(cnt == word.size() || cnt == 0 || (cnt == 1 && (word[0] >= 'A' && word[0] <= 'Z')))
            return true;
        return false;
    }
};