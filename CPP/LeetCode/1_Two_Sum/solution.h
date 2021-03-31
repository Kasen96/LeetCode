// 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。
// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
// 你可以按任意顺序返回答案。

#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Solution {
    public:
        // Traverse the array one by one
        // put the "target - num[i]"" into the map as key
        // so, when we checking the next num[i], if we found it is exisited in the map.
        // which means we found the second one.
        vector<int> twoSum(vector<int> & nums, int target) 
        {
            unordered_map<int, int> m;
            vector<int> result;

            for(int i = 0; i < nums.size(); ++i)
            {
                auto found = m.find(nums[i]);
                // not found
                if (found == m.end())
                {
                    m.emplace(target - nums[i], i);
                }
                else 
                {
                    result.push_back(found->second);
                    result.push_back(i);
                    break;
                }
            }

            return result;
        }
};
