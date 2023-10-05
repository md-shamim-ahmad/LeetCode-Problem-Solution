class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> alphabet(26);
        for (int i = 0; i < sentence.size(); i++) {
            alphabet[sentence[i] - 'a']++;
        }
        for (auto it: alphabet) {
            if (it == 0)
                return false;
        }
        return true;
    }
};