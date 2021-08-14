#include <vector>
#include <numeric>

class Solution {
public:
    bool canPartition(std::vector<int>& nums) {
        int sum = std::accumulate(nums.cbegin(), nums.cend(), 0);
        if (sum & 1)
            return false;
        int target = sum / 2;
        int n = static_cast<int>(nums.size());
        std::vector<std::vector<bool>> dp(n + 1, std::vector<bool>(target + 1, false));
        dp[0][0] = true;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0; j <= target; ++j)
            {
                if (j < nums[i - 1])
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
                }
            }
        }
        return dp[n][target];
    }
};