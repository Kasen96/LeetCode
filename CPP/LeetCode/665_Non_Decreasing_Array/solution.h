#include <vector>

class Solution {
public:
    bool checkPossibility(std::vector<int>& nums) {
        size_t count = 1;
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] < nums[i - 1]) {
                if (count == 0) {
                    return false;
                }
                if (i == 1 || nums.at(i) >= nums.at(i - 2)) {
                    nums.at(i - 1) = nums.at(1);
                }
                else {
                    nums.at(i) = nums.at(i - 1);
                }
                --count;
            } 
        }
        return true;
    }
};
