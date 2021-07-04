#include <vector>
#include <unordered_map>

class Solution {
    public:
        // Traverse the array one by one
        // put the "target - num[i]"" into the map as key
        // so, when we checking the next num[i], if we found it is exisited in the map.
        // which means we found the second one.
        std::vector<int> twoSum(std::vector<int> & nums, int target) 
        {
            std::unordered_map<int, int> m;
            std::vector<int> result;

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
