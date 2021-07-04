#include <vector>
#include <algorithm>
#include <numeric>

class Solution {
public:
    int candy(std::vector<int>& ratings) {
        size_t size = ratings.size();
        if (size < 2) {
            return size;
        }

        std::vector<int> num(size, 1);

        /*
        * 先从左往右遍历一遍，
        * 如果右边孩子的评分比左边的高，
        * 则右边孩子的糖果数更新为左边孩子的糖果数加 1
        */
        for (size_t i = 1; i < size; ++i) {
            if (ratings.at(i) > ratings.at(i - 1)) {
                num.at(i) = num.at(i - 1) + 1;
            }
        }

        /*
        * 再从右往左遍历一遍，
        * 如果左边孩子的评分比右边的高，
        * 且左边孩子当前的糖果数不大于右边孩子的糖果数，
        * 则左边孩子的糖果数更新为右边孩子的糖果数加 1
        */
        for (size_t j = size - 1; j > 0; --j) {
            if (ratings.at(j) < ratings.at(j - 1)) { 
                num.at(j - 1) = std::max(num.at(j - 1), num.at(j) + 1);
            }
        }

        return std::accumulate(num.begin(), num.end(), 0);
    }
};
