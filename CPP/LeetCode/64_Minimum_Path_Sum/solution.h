#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int minPathSum(std::vector<std::vector<int>>& grid) {
        if (grid.empty() || grid[0].empty())
            return 0;
        
        std::size_t m = grid.size();
        std::size_t n = grid[0].size();
        std::vector<std::vector<int>> dp (m, std::vector<int>(n));
        dp[0][0] = grid[0][0];

        for (std::size_t i = 1; i < m; ++i)
        {
            dp[i][0] = grid[i][0] + dp[i - 1][0];
        }

        for (std::size_t j = 1; j < n; ++j)
        {
            dp[0][j] = grid[0][j] + dp[0][j - 1];
        }

        for (std::size_t i = 1; i < m; ++i)
        {
            for (std::size_t j = 1; j < n; ++j)
            {
                dp[i][j] = grid[i][j] + std::min(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[m - 1][n - 1];
    }

    /*
    * 对于第 i 行，在遍历到第 j 列的时候，因为第 j-1 列已经更新过了，所以 dp[j-1] 代表 dp[i][j-1] 的值；
    * 而 dp[j] 待更新，当前存储的值是在第 i-1 行的时候计算的，所以代表 dp[i-1][j] 的值。
    */
    int minPathSum2(std::vector<std::vector<int>>& grid) {
        if (grid.empty() || grid[0].empty())
            return 0;
        
        std::size_t m = grid.size();
        std::size_t n = grid[0].size();
        std::vector<int> dp (n, INT_MAX);
        dp[0] = 0;

        for (std::size_t i = 0; i < m; ++i)
        {
            for (std::size_t j = 0; j < n; ++j)
            {
                if (j == 0)
                    dp[j] += grid[i][j];
                else
                    dp[j] = grid[i][j] + std::min(dp[j - 1], dp[j]);
            }
        }
        
        return dp[n - 1];
    }
};
