#include <vector>
#include <algorithm>

class Solution {
public:
    int lengthOfLIS(std::vector<int>& nums) {
        std::vector<int> dp(nums.size(), 1);
        
        int res = 0;
        for (std::size_t i = 0; i < nums.size(); ++i)
        {
            for (std::size_t j = 0; j < i; ++j)
            {
                if (nums[i] > nums[j])
                    dp[i] = std::max(dp[i], dp[j] + 1);
            }
            res = std::max(res, dp[i]);
        }

        return res;
    }
};
