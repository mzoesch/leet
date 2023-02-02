// #9 20230130 -- easy

#include <iostream>
#include <string>
#include <stdlib.h>

class Solution {

public:

    bool isPalindrome(int x) {
        
        std::string s = std::to_string(x);

        int i = 0;
        int j = s.size() - 1;

        while (true) {
            
            if (j <= i)
                break;

            if (s[i] == s[j]) {

                i += 1;
                j -= 1;
                continue;
            }

            return false;
        }
        
        return true;
    }
}
;


int main() {

    int x = -121;

    Solution solution;
    solution.isPalindrome(x);


    return EXIT_SUCCESS;
}
