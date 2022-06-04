class Solution {
public:
    static inline std::string &ltrim(std::string &s) {
        s.erase(s.begin(), std::find_if(s.begin(), s.end(),
                                        std::not1(std::ptr_fun<int, int>(std::isspace))));
        return s;
    }

    static inline std::string &rtrim(std::string &s) {
        s.erase(std::find_if(s.rbegin(), s.rend(),
                             std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
        return s;
    }

    static inline std::string &trim(std::string &s) {
        return ltrim(rtrim(s));
    }

    int myAtoi(string s) {
        s = trim(s);
        if (s.size() == 0)
            return 0;
        int sign = 1;
        if (s[0] == '-') {
            sign = -1;
            s = s.substr(1);
        } else if (s[0] == '+') {
            s = s.substr(1);
        }
        long long ans = 0;
        for (int i = 0; i < s.size() && s[i] >= '0' && s[i] <= '9'; i++) {
            ans = ans * 10 + (s[i] - '0');
            if (ans * sign > INT_MAX)
                return INT_MAX;
            if (ans * sign < INT_MIN)
                return INT_MIN;
        }
        return ans * sign;
    }
};
