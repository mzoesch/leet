#include <unordered_set>
#include <string>
#include <cmath>

class Solution {

public:

    bool isHappy(int n) {

        std::unordered_set<int> m;        
        std::string s = std::to_string(n);

        while (true) {
            
            int x = 0;
            for (char c : s)
                x += std::pow((int) c - '0', 2);
            
            if (x == 1)
                return true;

            if (m.find(x) != m.end())
                return false;
            m.insert(x);
            
            s = std::to_string(x);

            continue;
        }

        return false;
    }
}
;


int main() {

    int n = 100;

    Solution solution;
    solution.isHappy(n);

    return EXIT_SUCCESS;
}
