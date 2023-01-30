// 20230130 -- easy

#include <stdlib.h>
#include <string>
#include <vector>


class Solution {

public:
    
    std::string longestCommonPrefix(std::vector<std::string> &strs) {

        std::string acc = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            
            int j = 0;
            for (char c : strs[i]) {
                
                if (j >= acc.size())
                    break;
                
                if (acc[j] == c) {
                    j++;
                    continue;
                }
                
                break;
            }

            if (j == 0)
                return "";

            acc = strs[i].substr(0, j);
            continue;
        }

        return acc;
    }
}
;


int main() {

    std::vector<std::string> strs = {
        "flower"
        , "flow"
        , "flight"
    }
    ;

    Solution solution;
    solution.longestCommonPrefix(strs);

    return EXIT_SUCCESS;
}
