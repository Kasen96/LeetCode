// time and space O(n)

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<int> partitionLabels(std::string s) {
        std::unordered_map<char, size_t> umap;
        std::vector<int> res;
        size_t size = s.size(), first = 0, last = 0;

        for (size_t i = 0; i < size; ++i) {
            umap[s.at(i)] = i;
        }

        for (size_t i = 0; i < size; ++i) {
            last = std::max(last, umap[s.at(i)]);
            if (i == last) {
                res.push_back(static_cast<int>(i - first + 1));
                first = i + 1;
            }
        }
        return res;
    }
};
