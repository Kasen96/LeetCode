#include <vector>

class Solution {
public:
    int numberOfArithmeticSlices(std::vector<int>& nums) {
        int res = 0;
        int n = static_cast<int>(nums.size());
        std::vector<int> dp(n, 0);

        if (n < 3)
            return 0;

        for(int i = 2; i < n; ++i)
        {
            if (nums.at(i) - nums.at(i - 1) == nums.at(i - 1) - nums.at(i - 2))
            {
                dp.at(i) = dp.at(i - 1) + 1;
            }
            res += dp.at(i);
        }
        return res;
    }
};
