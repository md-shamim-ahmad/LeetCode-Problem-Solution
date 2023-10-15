class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "", str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        while (columnNumber > 0) {
            s += str[(columnNumber - 1) % 26];
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
