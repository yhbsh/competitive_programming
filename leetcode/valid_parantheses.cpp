class Solution {
public:
    bool isValid(string s) {
        int n = s.size();

        stack<char> stack;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
                stack.push(c);

            else if (c == ')' && !stack.empty() && stack.top() == '(')
                stack.pop();

            else if (c == ']' && !stack.empty() && stack.top() == '[')
                stack.pop();

            else if (c == '}' && !stack.empty() && stack.top() == '{')
                stack.pop();

            else
                return false;
        }
        
        return stack.empty();
    }
};