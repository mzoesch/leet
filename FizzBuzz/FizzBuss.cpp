// # 412 20230203 -- easy

#include <string>
#include <stdlib.h>
#include <vector>

class Solution {

public:

    std::vector<std::string> fizzBuzz(int n) {

        std::vector<std::string> v;

        int i = 0;
        while (i < n) {
            i++;

            if (i % 3 == 0 && i % 5 == 0) {
                v.push_back("FizzBuzz");
                continue;
            }
            if (i % 3 == 0) {
                v.push_back("Fizz");
                continue;
            }
            if (i % 5 == 0) {
                v.push_back("Buzz");
                continue;
            }

            v.push_back(to_string(i));
            continue;
        }

        return v;
    }
}
;


int main() {

    int n = 5;

    Solution solution;
    solution.fizzBuzz(n);

    return EXIT_SUCCESS;
}
