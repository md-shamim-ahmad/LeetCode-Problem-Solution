class Solution {
public:
    long long maximumHappinessSum(vector<int> &happiness, int k) {
        long long sum = 0;
        sort(happiness.begin(), happiness.end(), greater<int>());
        for (int i = 0; i < k; i++) {
            if ((happiness[i] - i) > 0)
                sum += (happiness[i] - i);
        }
        return sum;
    }
};