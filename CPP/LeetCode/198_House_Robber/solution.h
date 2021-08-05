#include <vector>
#include <algorithm>

class Solution {
public:
    int rob(std::vector<int>& nums) {
        if (nums.size() <= 1)
            return nums.empty() ? 0 : nums.at(0);
        std::vector<int> dp {nums.at(0), std::max(nums.at(0), nums.at(1))};

        for (std::size_t i = 2; i < nums.size(); ++i)
        {
            dp.push_back(std::max(dp.at(i - 1), nums.at(i) + dp.at(i - 2))); 
        }

        return dp.back();
    }

    int rob2(std::vector<int>& nums) {
        if (nums.size() <= 1)
            return nums.empty() ? 0 : nums.at(0);
        int a = nums.at(0);
        int b = std::max(nums.at(0), nums.at(1));
        int temp;

        for (std::size_t i = 2; i < nums.size(); ++i)
        {
            temp = std::max(b, nums.at(i) + a);
            a = b;
            b = temp;
        }

        return b;
    }
};
