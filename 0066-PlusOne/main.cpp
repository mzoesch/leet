#include <vector>
#include <stdlib.h>

class Solution {

public:
    
    std::vector<int> plusOne(std::vector<int>& digits) {

        int i = digits.size() - 1;
        while (true) {
            
            if (i <= -1) {
                digits.insert(digits.begin(), 1);
                break;
            }

            digits[i] += 1;
            if (digits[i] > 9) {
                digits[i] -= 10;
                i--;

                continue;
            }

            break;
        }
        
        return digits;
    }
}
;


int main() {

    std::vector<int> digits = {9};

    Solution solution;
    solution.plusOne(digits);

    return EXIT_SUCCESS;
}
