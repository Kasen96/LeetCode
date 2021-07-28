#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> map;
        int max_count = 0;
        for (const auto i : nums)
        {
            max_count = std::max(max_count, ++map[i]);
        }

        std::vector<std::vector<int>> bucket(max_count + 1);
        for (const auto &p : map)
        {
            bucket[p.second].push_back(p.first);
        }

        std::vector<int> result;
        for (int i = max_count; i > 0 && result.size() < k; --i)
        {
            for (const auto num : bucket[i])
            {
                result.push_back(num);
                if (result.size() == k)
                {
                    break;
                }
            }
        }
        return result;
    }
};
