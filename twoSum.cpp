// 20230129 -- easy

#include <iostream>
#include <vector>
#include <stdlib.h>


class Solution {

public:
    
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
        for (int i = 0; i < nums.size(); i++) {
            
            for (int j = 0; j < nums.size(); j++) {
                
                if (i == j) continue;
                if (nums[i] + nums[j] == target) return {i, j};
            }
        }

        return {-1};
    }
}
;


int main() {
    
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    solution.twoSum(nums, target);
    
    return EXIT_SUCCESS;
}
