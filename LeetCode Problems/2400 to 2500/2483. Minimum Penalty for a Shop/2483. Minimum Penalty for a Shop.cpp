class Solution {
public:
    int bestClosingTime(string customers) {
        int n = 0 /*number of 'N' char*/, y = 0 /*number of 'Y' char*/;
        for (char ch: customers) {
            if (ch == 'N')
                n++;
        }
        int penalty = INT_MAX, closing_time, i;
        for (i = customers.size() - 1; i >= 0; i--) {
            if (penalty >= n + y) {
                penalty = n + y;
                closing_time = i + 1;
            }
            if (customers[i] == 'Y')
                y++;
            if (customers[i] == 'N')
                n--;
        }
        if (penalty >= n + y) {
            closing_time = i + 1;
        }
        return closing_time;
    }
};