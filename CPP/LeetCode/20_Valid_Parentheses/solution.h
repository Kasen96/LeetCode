#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stk;
        for (const auto c : s) 
        {
            if (!stk.empty() && (
                (c == ')' && stk.top() == '(') || 
                (c == ']' && stk.top() == '[') ||
                (c == '}' && stk.top() == '{') ))
            {
                stk.pop();
            }
            else 
            {
                stk.push(c);
            }
        }
        return stk.empty();
    }
};