// #9 20230130 -- easy

#include <iostream>
#include <string>
#include <stdlib.h>

class Solution {

public:

    bool isPalindrome(int x) {
        
        std::string s = std::to_string(x);
        
        if (s.size() <= 1)
            return true;

        if (s.rfind("-") == 0)
            return false;

        if (s[0] != s.back())
            return false;
        
        int newInt = 0;
        int j = 1;

        for (int i = s.size() - 2; i >= 1; i--) {
            // Substract ASII values
            newInt += ((int) s[i] - (int) '0') * j;
            j *= 10;
        }

        return isPalindrome(newInt);
    }
}
;


int main() {

    int x = -121;

    Solution solution;
    solution.isPalindrome(x);

    return EXIT_SUCCESS;
}
