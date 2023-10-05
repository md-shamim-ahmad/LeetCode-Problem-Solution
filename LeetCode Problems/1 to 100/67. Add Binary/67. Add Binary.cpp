class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int carry = 0;
        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0 || carry;
             --i, --j) {
            carry += i >= 0 ? a[i] - '0' : 0;
            carry += j >= 0 ? b[j] - '0' : 0;
            result += (carry & 1) + '0';
            carry >>= 1;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};