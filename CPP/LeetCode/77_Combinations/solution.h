#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> combine(int n, int k) {
        std::vector<std::vector<int>> res;
        std::vector<int> out;
        backtrack(n, k, 1, out, res);
        return res;
    }

    void backtrack(int n, int k, int level, std::vector<int> &out, std::vector<std::vector<int>> &res)
    {
        if (out.size() == k)
        {
            res.push_back(out);
            return;
        }

        for (std::size_t i = level; i <= n; ++i)
        {
            out.push_back(i);
            backtrack(n, k, i + 1, out, res);
            out.pop_back();
        }
    }
};
