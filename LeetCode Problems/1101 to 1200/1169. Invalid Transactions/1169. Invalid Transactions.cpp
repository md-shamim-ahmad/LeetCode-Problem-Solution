class Solution {
public:
    vector<string> invalidTransactions(vector<string> &transactions) {
        vector<bool> invalid(transactions.size(), false);
        vector<vector<string>> trans;
        for (auto t: transactions) {
            string tmp;
            vector<string> tt;
            for (auto c: t) {
                if (c == ',') {
                    tt.push_back(tmp);
                    tmp = "";
                } else
                    tmp += c;
            }
            tt.push_back(tmp);
            trans.push_back(tt);
        }
        for (int i = 0; i < trans.size(); i++) {
            if (stoi(trans[i][2]) > 1000) invalid[i] = true;
            for (int j = i + 1; j < trans.size(); j++) {
                if ((trans[i][0] == trans[j][0]) && abs(stoi(trans[i][1]) - stoi(trans[j][1])) <= 60 &&
                    (trans[i][3] != trans[j][3])) {
                    invalid[i] = true;
                    invalid[j] = true;
                }
            }
        }

        vector<string> res;
        for (int i = 0; i < trans.size(); i++) {
            if (invalid[i]) res.push_back(transactions[i]);
        }
        return res;
    }
};
