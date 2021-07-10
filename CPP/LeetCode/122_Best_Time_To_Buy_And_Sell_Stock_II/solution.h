#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int profit = 0;
        for (size_t i = 1; i < prices.size(); ++i) {
            profit += std::max(0, prices.at(i) - prices.at(i - 1));
        }

        return profit;
    }
};
