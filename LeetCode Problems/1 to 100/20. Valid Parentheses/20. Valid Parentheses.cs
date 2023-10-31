public class Solution {

    Dictionary<Char, Char> parenthesisDictionary = new Dictionary<Char, Char>()
    {
        { '{', '}' },
        { '(', ')' },
        { '[', ']' },
    };

    public bool IsValid(string s) {
       
        Stack<Char> parenthesisChecker = new Stack<Char>();
        for (int i = 0; i < s.Length; i++)
        {
            if(parenthesisChecker.Count > 0)
            {
                Char top = parenthesisChecker.Peek();

                if (parenthesisDictionary.ContainsKey(top) && parenthesisDictionary[top] == s[i])
                {
                    parenthesisChecker.Pop();
                }
                else
                {
                    parenthesisChecker.Push(s[i]);
                }
            }
            else
            {
                parenthesisChecker.Push(s[i]);
            }
        }

        return parenthesisChecker.Count == 0 ? true : false;
    }
}