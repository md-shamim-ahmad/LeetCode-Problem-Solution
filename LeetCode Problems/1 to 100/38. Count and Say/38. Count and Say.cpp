class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        else {
            string s = countAndSay(n - 1), generate_str = "";
            int cnt = 1, i = 0;
            for (i = 1; i < s.size(); i++) {
                if (s[i] != s[i - 1]) {
                    generate_str += to_string(cnt) + s[i - 1];
                    cnt = 1;
                } else
                    cnt++;
            }
            if (s[i] != s[i - 1]) {
                generate_str += to_string(cnt) + s[i - 1];
                cnt = 1;
            }
            return generate_str;
        }
    }
};
