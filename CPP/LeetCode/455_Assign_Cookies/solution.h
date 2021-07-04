#include <vector>
#include <algorithm>

class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        size_t child = 0, cookies = 0;
        while (child < g.size() && cookies < s.size()) {
            if (g.at(child) <= s.at(cookies)) {
                ++child;
            }
            ++cookies;
        }
        return static_cast<int>(child);
    }
};
