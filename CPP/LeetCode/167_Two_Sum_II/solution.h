#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int l = 0, r = static_cast<int>(numbers.size() - 1), sum = 0;

        while (l < r)
        {
            sum = numbers.at(l) + numbers.at(r);
            if (sum == target)
            {
                break;
            }
            if (sum < target)
            {
                ++l;
            }
            else 
            {
                --r;
            }
        }
        
        return std::vector<int> {l + 1, r + 1};
    }
};
