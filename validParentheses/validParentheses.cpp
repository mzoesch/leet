
#include <string>
#include <stdlib.h>
#include <stack>

class Solution {

public:

    // s consists only of parentheses
    bool isValid(std::string s) {
        
        std::stack<char> stck;

        for (char c : s) {

            if (c == '(' || c == '[' || c == '{') {
                stck.push(c);
                continue;
            }

            if (stck.empty())
                return false;

            char closingP = stck.top();
            stck.pop();
            if (
                (c == ')' && closingP == '(')
                    ||
                (c == ']' && closingP == '[')
                    ||
                (c == '}' && closingP == '{')
                )
                continue;

            return false;
        }

        if (stck.empty())
            return true;

        return false;
    }
}
;


int main() {

    std::string s = "({[]})";

    Solution solution;
    solution.isValid(s);

    return EXIT_SUCCESS;
}
