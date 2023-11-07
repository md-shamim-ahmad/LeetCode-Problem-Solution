public class Solution {

    Dictionary<Char, Char> parenthesisDictionary = new Dictionary<Char, Char>() {
        { '{', '}' },
        { '(', ')' },
        { '[', ']' },
    };

    public bool IsValid(string s) {
        Stack<Char> paranthesisChecker = new Stack<Char>();
        for (int i = 0; i < s.Length; i++) {
            if (paranthesisChecker.Count > 0) {
                Char top = paranthesisChecker.Peek();

                if (parenthesisDictionary.ContainsKey(top) && parenthesisDictionary[top] == s[i]) {
                    paranthesisChecker.Pop();
                } else {
                    paranthesisChecker.Push(s[i]);
                }
            } else {
                paranthesisChecker.Push(s[i]);
            }
        }

        return paranthesisChecker.Count == 0 ? true : false;
    }
}
