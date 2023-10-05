class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> char_Of_S(256), char_Of_target(256);

        // set all value is zero.
        for (int i = 0; i < 256; i++) {
            char_Of_S[i] = 0;
            char_Of_target[i] = 0;
        }

        // Let's calculate how many times the same character is in S string.
        for (int i = 0; i < s.size(); i++) {
            char_Of_S[s[i] - 'a']++;
        }

        // Let's calculate how many times the same character is in target string.
        for (int i = 0; i < target.size(); i++) {
            char_Of_target[target[i] - 'a']++;
        }

        // Solution for this problem is the minimum number of ratios
        // between char_Of_S[target[i]]'th value and char_Of_target[target[i]]'th
        // value.
        int ans = INT_MAX;
        for (int i = 0; i < target.size(); i++) {
            ans = min(ans, (int) (char_Of_S[target[i] - 'a'] /
                                  char_Of_target[target[i] - 'a']));
        }
        return ans;
    }
};