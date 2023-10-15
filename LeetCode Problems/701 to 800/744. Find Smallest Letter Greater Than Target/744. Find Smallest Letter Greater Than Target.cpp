class Solution {
public:
    char nextGreatestLetter(vector<char> &letters, char target) {
        int pos = (upper_bound(letters.begin(), letters.end(), target)) - letters.begin();
        if (pos == letters.size())
            return letters[0];
        return letters[pos];
    }
};