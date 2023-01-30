// 20230129 -- easy

#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>


class Solution {

private:

    std::map<char, int> romans = {
          {'I', 1}
        , {'V', 5}
        , {'X', 10}
        , {'L', 50}
        , {'C', 100}
        , {'D', 500}
        , {'M', 1000}
    }
    ;

public:
    
    int romanToInt(std::string s) {
        
        int res = 0;
                
        for (int i = 0; i < s.size(); i++) {
            
            if (i >= s.size()) return res + this->romans.find(s[i])->second;
            
            int x = this->romans.find(s[i])->second;
            if (x != 1 && x != 10 && x != 100) {
                res += x;
                continue;
            }

            int next = this->romans.find(s[i + 1])->second;
            if (x == 1 && (next == 5 || next == 10))
                res -= x; // I
            else
            if (x == 10 && (next == 50 || next == 100))
                res -= x; // X
            else
            if (x == 100 && (next == 500 || next == 1000))
                res -= x; // C
            else
                res += x;
            
            continue;
        }

        return res;
    }
}
;


int main () {
   
    std::string s = "MCMXCIV";
    
    Solution solution;
    solution.romanToInt(s);
    
    return EXIT_SUCCESS;
}
