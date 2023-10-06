class Solution {
public:
    string shiftingLetters(string s, vector<int> &shifts) {
        for (int i = shifts.size() - 2; i >= 0; i--) {
            shifts[i] = (shifts[i] % 26 + shifts[i + 1] % 26) % 26;
        }
        for (int i = 0; i < s.size(); i++) {
            int int_val = (int) s[i] + (shifts[i] % 26);
            if (int_val > 122) {
                int_val -= 26;
            }
            s[i] = (char) int_val;
        }
        return s;
    }
};