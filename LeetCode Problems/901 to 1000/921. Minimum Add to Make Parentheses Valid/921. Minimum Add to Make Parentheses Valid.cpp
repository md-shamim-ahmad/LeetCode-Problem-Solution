class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> parentheses;
        int cnt = 0;
        for(char ch : s) {
            if(ch == '(')
                parentheses.push(ch);
            else {
                if (!parentheses.empty())
                    parentheses.pop();
                else
                    cnt++;                
            }
        }
        return cnt + parentheses.size();
    }
};