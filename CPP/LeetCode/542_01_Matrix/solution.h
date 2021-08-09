#include <vector>
#include <climits>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> updateMatrix(std::vector<std::vector<int>>& mat) {
        if (mat.empty())
            return {};
        int m = static_cast<int>(mat.size());
        int n = static_cast<int>(mat[0].size());
        std::vector<std::vector<int>> res(m, std::vector<int>(n, INT_MAX - 1));

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (mat[i][j] == 0)
                {
                    res[i][j] = 0;
                }
                else 
                {
                    if (i > 0)
                        res[i][j] = std::min(res[i][j], res[i - 1][j] + 1);
                    if (j > 0)
                        res[i][j] = std::min(res[i][j], res[i][j - 1] + 1);
                }
            }
        }

        for (int i = m - 1; i >= 0; --i)
        {
            for (int j = n - 1; j >= 0; --j)
            {
                if (res[i][j] != 0 && res[i][j] != 1)
                {
                    if (i < m - 1)
                        res[i][j] = std::min(res[i][j], res[i + 1][j] + 1);
                    if (j < n - 1)
                        res[i][j] = std::min(res[i][j], res[i][j + 1] + 1);
                }
            }
        }

        return res;
    }
};
