class Solution {
public:
    string largestGoodInteger(string num) {
        char ch = '0';
        bool check = false;
        for (int i = 1; i < num.size(); i++) {
            if (num[i] == num[i - 1]) {
                int cnt = 0;
                while (num[i] == num[i - 1] && i < num.size()) {
                    cnt++;
                    i++;
                }
                if (cnt >= 2 && num[i - 1] >= ch) {
                    ch = num[i - 1];
                    check = true;
                }
            }
        }
        if (!check) return "";
        string s = "";
        s += ch;
        s += ch;
        s += ch;
        return s;
    }
};