#include <vector>
#include <algorithm>

class Solution {
public:
    int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals) {
        if (intervals.empty()) {
            return 0;
        }

        std::sort(intervals.begin(), intervals.end(), 
            [](std::vector<int> &a, std::vector<int> &b){ 
                return a.at(1) < b.at(1); 
            });
        
        size_t size = intervals.size();
        int removed = 0;
        int rhs = intervals.at(0).at(1);

        for (size_t i = 1; i < size; ++i) {
            if (intervals.at(i).at(0) < rhs) {
                ++removed;
            }
            else {
                rhs = intervals.at(i).at(1);
            }
        }

        return removed;
    }
};
