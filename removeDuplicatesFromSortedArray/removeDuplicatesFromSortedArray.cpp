// #26 20230131 -- easy

#include <stdlib.h>
#include <vector>


class Solution {

public:

    int removeDuplicates(std::vector<int>& nums) {

        int k = 0;    
        for (int i = 1; i < nums.size(); i++) {
            
            if (nums[k] == nums[i])    
                continue;
            nums[++k] = nums[i];
            continue;
        }

        return k += 1;
    }
}
;


int main() {

    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    std::vector<int> expectedNums = {0, 1, 2, 3, 4};

    Solution solution;
    solution.removeDuplicates(nums);
    
    return EXIT_SUCCESS;
}
