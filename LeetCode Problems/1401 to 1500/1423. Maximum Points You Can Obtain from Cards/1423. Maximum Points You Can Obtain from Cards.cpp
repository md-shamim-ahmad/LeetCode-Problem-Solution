class Solution {
public:
    int maxScore(vector<int> &cardPoints, int k) {
        int n = cardPoints.size(), i, j;
        int answer, curr_answer = 0;

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        for (i = 0; i < k; i++) curr_answer += cardPoints[i];
        answer = curr_answer;

        for (i = k - 1, j = n - 1; i >= 0; i--, j--) {
            curr_answer += cardPoints[j] - cardPoints[i];
            answer = max(answer, curr_answer);
        }

        return answer;
    }
};