#include <string>
#include <stdlib.h>

class Solution {

public:

    int lengthOfLongestSubstring(std::string s) {

        std::string subs = "";
        int max = 0;

        for (char c : s) {
            
            if (subs.find(c) == std::string::npos) {
                subs.push_back(c);
                continue;
            }
            
            if (subs.size() > max)
                max = subs.size();
    
            int i = subs.find(c) + 1;
            std::string olds = subs;
            subs = "";

            while (true) {
                if (i >= olds.size())
                    break;
                subs.push_back(olds[i++]);
            }
            subs.push_back(c);
            
            continue;
        }
        
        return subs.size() > max ? subs.size() : max;
    }
}
;


int main() {

    std::string s = "abcabcbb";

    Solution solution;
    solution.lengthOfLongestSubstring(s);

    return EXIT_SUCCESS;
}
