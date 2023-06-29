// #7 20230204 -- medium

#include <stdlib.h>

class Solution {

public:

    int reverse(int x) {
    
        int n = 0;
      
        while (x > 0 || x < 0) {
            
            if (n > std::numeric_limits<int>::max() / 10 || n < std::numeric_limits<int>::min() / 10)
                return 0;
            
            n *= 10;
            n += x % 10;
            x /= 10;
        }

        return n;
    }
}
;


int main() {
    
    int x = 123;

    Solution solution;
    solution.reverse(x);

    return EXIT_SUCCESS;
}
