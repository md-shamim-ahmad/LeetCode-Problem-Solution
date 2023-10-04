class sol {
public:
    int val, freq;
};

bool cmp(sol a, sol b) {
    return a.freq > b.freq;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int numbers[20000] = {0};

        for (int i = 0; i < nums.size(); i++) {
            numbers[nums[i] + 10000]++;
        }

        vector<sol> temp;
        for (int i = 0; i < 20000; i++) {
            if (numbers[i]) {
                sol a;
                a.val = i - 10000;
                a.freq = numbers[i];
                temp.push_back(a);
            }
        }

        sort(temp.begin(), temp.end(), cmp);

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(temp[i].val);
        }
        return ans;
    }
};
