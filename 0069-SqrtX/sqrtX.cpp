#include <stdlib.h>

class Solution {

public:

    int mySqrt(int x) {

        unsigned long i = 0;
        while (true)
            if (++i*i > x)
                return i - 1;

        return 0;
    }
}
;


int main() {

    int x = 4;

    Solution solution;
    solution.mySqrt(x);

    return EXIT_SUCCESS;
}
