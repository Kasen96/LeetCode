#include <vector>
#include <algorithm>

// similar with 435
class Solution {
public:
    int findMinArrowShots(std::vector<std::vector<int>>& points) {
        if (points.empty()){
            return 0;
        }

        std::sort(points.begin(), points.end(), 
            [](std::vector<int> &a, std::vector<int> &b){ 
                return a.at(1) < b.at(1); 
            });

        size_t size = points.size();
        int arrows = 1;
        int rhs = points.at(0).at(1);

        for (size_t i = 1; i < size; ++i) {
            if (points.at(i).at(0) > rhs) {
                ++arrows;
                rhs = points.at(i).at(1);
            }
        }

        return arrows;
    }
};
