class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string rev = str;
        reverse(rev.begin(), rev.end());
        return (str == rev ? true : false);
    }
};
