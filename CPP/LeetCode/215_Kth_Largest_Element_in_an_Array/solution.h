#include <vector>
#include <utility>

class Solution {
public:
    int partition(std::vector<int> &nums, int left, int right)
    {
        int pivot = nums.at(left);
        int l = left + 1;
        int r = right;
        while (l <= r)
        {
            if (nums.at(l) < pivot && nums.at(r) > pivot)
                std::swap(nums.at(l++), nums.at(r--));
            if (nums.at(l) >= pivot)
                ++l;
            if (nums.at(r) <= pivot)
                --r;
        }
        std::swap(nums.at(left), nums.at(r));
        return r;
    }

    int findKthLargest(std::vector<int>& nums, int k) {
        int left = 0;
        int right = static_cast<int>(nums.size() - 1);
        while (true)
        {
            int pos = partition(nums, left, right);
            if (pos == k - 1)
                return nums.at(pos);
            if (pos > k - 1)
                right = pos - 1;
            else
                left = pos + 1;
        }
    }
};
