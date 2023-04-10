class Solution {
public:
    bool isValid(string s) {
        stack<char> arr;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                arr.push(s[i]);
                continue;
            }
            if (arr.size() == 0)
                return false;
            if (s[i] == ')' && arr.top() == '(')
                arr.pop();
            else if (s[i] == '}' && arr.top() == '{')
                arr.pop();
            else if (s[i] == ']' && arr.top() == '[')
                arr.pop();
            else 
                return false;
        }
        return arr.size() == 0 ? true : false;
    }
};
