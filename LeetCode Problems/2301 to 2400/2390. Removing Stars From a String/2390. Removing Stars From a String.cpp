class Solution {
public:
    string removeStars(string s) {
        string st = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '*') 
                st.pop_back();
            else 
                st.push_back(s[i]);
        }
        return st;
    }
};