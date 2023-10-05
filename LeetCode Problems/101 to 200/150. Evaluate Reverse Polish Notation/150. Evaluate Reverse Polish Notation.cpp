class Solution {
    stack<long long> numList;
    long long a, b;
    bool isOperator(string &op) {
        if (op == "+" || op == "-" || op == "*" || op == "/")
            return true;
        return false;
    }
    void operation(string &op) {
        a = numList.top();
        numList.pop();// Store the numList last value into a.
        b = numList.top();
        numList.pop();                     // Store the numList first value into b.
        if (op == "+") numList.push(a + b);// why (b - a)? Because in numList a & b represent as [b, a].That's why b - a.
        else if (op == "-")
            numList.push(b - a);
        else if (op == "*")
            numList.push(a * b);
        else if (op == "/")
            numList.push(b / a);// same process as subtraction.
    }

public:
    int evalRPN(vector<string> &tokens) {
        for (auto token: tokens) {
            if (isOperator(token))
                operation(token);
            else
                numList.push(stoi(token));
        }
        return numList.top();
    }
};
