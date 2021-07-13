#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        for (int pos = m + n - 1, i = m - 1, j = n - 1; pos >= 0; --pos)
        {
            if (i >= 0 && j >= 0)
            {
                nums1.at(pos) = nums1.at(i) > nums2.at(j) ? nums1.at(i--) : nums2.at(j--);
            }
            else if (j >= 0)
            {
                nums1.at(pos) = nums2.at(j--);
            }
        }
    }
};
