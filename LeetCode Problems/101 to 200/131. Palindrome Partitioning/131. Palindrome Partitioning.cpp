class Solution {
private:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while(l < r) {
            if(s[l] != s[r])
                return false;
            l++, r--;
        }
        return true;
    }
    void help(vector<vector<string>>&list, string s, vector<string>& a) {
        if(s.size()==0) {
            list.push_back(a);
            return;
        }
        for(int i = 0; i < s.size(); i++) {            
            string st = s.substr(0, i + 1);
            string b = s.substr(i + 1);
            if(isPalindrome(st)) {
                a.push_back(st);
                help(list, b, a);
                a.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> list;
        vector<string> a;
        help(list, s, a);
        return list;
    }
};