#include <vector>
#include <algorithm>

class Solution {
public:
    int maximalSquare(std::vector<std::vector<char>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0)
            return 0;

        int maxSide = 0;
        int m = static_cast<int>(matrix.size());
        int n = static_cast<int>(matrix[0].size());
        std::vector<std::vector<int>> dp(m, std::vector<int>(n));

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (matrix[i][j] == '1')
                {
                    if (i == 0 || j == 0) 
                        dp[i][j] = 1;
                    else
                        dp[i][j] = std::min(dp[i - 1][j - 1], std::min(dp[i - 1][j], dp[i][j - 1])) + 1;
                    
                    maxSide = std::max(maxSide, dp[i][j]);
                }
            }
        }

        return maxSide * maxSide;
    }
};
