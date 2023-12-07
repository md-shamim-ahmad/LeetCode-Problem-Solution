class Solution {
    bool isOdd(int num) {
        return num % 2;
    }

public:
    string largestOddNumber(string num) {
        int pos = -1;
        for (int i = 0; i < num.size(); i++) {
            if (isOdd(num[i] - '0')) {
                pos = i;
            }
        }
        return num.substr(0, pos + 1);
    }
};