#include <vector>

class Solution {
public:
    bool search(std::vector<int>& nums, int target) {
        size_t l = 0;
        size_t r = nums.size() - 1;

        while(l <= r)
        {
            size_t mid = l + (r - l) / 2;
            if (nums.at(mid) == target)
                return true;
            if (nums.at(l) == nums.at(mid))
                ++l;
            else if (nums.at(mid) <= nums.at(r))
            {
                // 右侧增序
                if (target > nums.at(mid) && target <= nums.at(r))
                    l = mid + 1;
                else
                    r = mid - 1;
            }
            else
            {
                // 左侧增序
                if (target >= nums.at(l) && target < nums.at(mid))
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        return false;
    }
};
