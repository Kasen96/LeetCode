#include <vector>

class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int size = static_cast<int>(nums.size() - 1);
        int index = binarySearch(nums, 0, size, target);
        if (index == -1)
            return {-1, -1};
        int left  = index;
        int right = index;
        while (left > 0 && nums.at(left - 1) == nums.at(index))
            --left;
        while (right < size && nums.at(right + 1) == nums.at(index))
            ++right;
        return {left, right};
    }

    int binarySearch(std::vector<int> &nums, int left, int right, int target)
    {
        if (left > right)
            return -1;
        int mid = left + (right - left) / 2;
        if (nums.at(mid) == target)
            return mid;
        else if (nums.at(mid) < target)
            return binarySearch(nums, mid + 1, right, target);
        else
            return binarySearch(nums, left, mid - 1, target);
    }
};
