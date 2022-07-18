class Solution {
public:
    string orderlyQueue(string s, int k) {
        if (k >= 2) {
            sort(s.begin(), s.end());
            return s;
        }else {
            vector<string> arr;
            arr.push_back(s);
            for (int i = 0; i < s.size(); i++) {
                s += s[0];
                s.erase(0,1);
                arr.push_back(s);
            }
            sort(arr.begin(), arr.end());
            return arr[0];
        }
    }
};