#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int solvetab(vector<int>& prices) {
        int n = prices.size();
        vector<int> curr(2, 0);
        vector<int> next(2, 0);
        int profit = 0;
        for (int index = n - 1; index >= 0; index--) {
            for (int buy = 0; buy <= 1; buy++) {
                if (buy == 1) {
                    profit = max(-prices[index] + next[0], 0 + next[1]);
                }
                else {
                    profit = max(prices[index] + next[1], 0 + next[0]);
                }
                curr[buy] = profit;
            }
            next = curr;
        }
        return next[1];
    }

    int maxProfit(vector<int>& prices) {
        return solvetab(prices);
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Replace this with your input prices
    Solution solution;
    int maxProfit = solution.maxProfit(prices);
    std::cout << "Maximum Profit: " << maxProfit << std::endl;
    return 0;
}
