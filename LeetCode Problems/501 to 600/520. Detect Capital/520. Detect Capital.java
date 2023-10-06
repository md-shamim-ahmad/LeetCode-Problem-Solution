class Solution {
    public boolean detectCapitalUse(String word) {
        int cnt = 0;
        for (int i = 0; i < word.length(); i++)
            if (word.charAt(i) >= 'A' && word.charAt(i) <= 'Z') cnt++;
        // (cnt == word.size()) -> mean's all letters in this word are uppercase.
        // (cnt == 0) -> mean's all letters in this word are lowercase.
        // (cnt == 1 && (word[0] >= 'A' && word[0] <= 'Z') -> mean's only first letter in this word are uppercase.
        if (cnt == word.length() || cnt == 0 || (cnt == 1 && (word.charAt(0) >= 'A' && word.charAt(0) <= 'Z'))) return true;
        return false;
    }
}
