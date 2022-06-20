class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = s.substr(0, s.size() / 2);
        string b = s.substr(s.size() / 2, s.size());
        int cnt = 0;
        for (auto ele : a){
            char ch = tolower(ele);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                cnt++;
        }
        for (auto ele : b){
            char ch = tolower(ele);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                cnt--;
        }
        if (cnt == 0)
            return true;
        else
            return false;
    }
};
