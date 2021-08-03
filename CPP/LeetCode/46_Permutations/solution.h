#include <vector>
#include <utility>

class Solution {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        backtracking(nums, 0, ans);
        return ans;
    }

    void backtracking(std::vector<int> &nums, std::size_t start, std::vector<std::vector<int>> &ans)
    {
        if (start == nums.size() - 1)
        {
            ans.push_back(nums);
            return;
        }

        for (std::size_t i = start; i < nums.size(); ++i)
        {
            std::swap(nums.at(start), nums.at(i));
            backtracking(nums, start + 1, ans);
            std::swap(nums.at(start), nums.at(i));
        }
    }
};
