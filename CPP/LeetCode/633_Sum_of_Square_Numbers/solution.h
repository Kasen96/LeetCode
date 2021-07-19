#include <cmath>
#include <unordered_set>

class Solution {
public:
    bool judgeSquareSum1(int c) {
        for (long i = std::sqrt(c); i >= 0; --i)
        {
            if (i * i == c)
                return true;
            int d = c - i * i;
            int t = std::sqrt(d);
            if (t * t == d)
                return true;
        }
        return false;
    }

    bool judgeSquareSum2(int c) {
        std::unordered_set<int> uset;
        for (long i = 0; i <= std::sqrt(c); ++i)
        {
            uset.insert(i * i);
            if (uset.count(c - i * i))
                return true;
        }
        return false;
    }

    bool judgeSquareSum3(int c) {
        long left = 0;
        long right = static_cast<long>(std::sqrt(c));
        while (left <= right)
        {
            long sum = left * left + right * right;
            if (sum == static_cast<long>(c))
                return true;
            else if (sum < c)
                ++left;
            else
                --right;
        }
        return false;
    }
};
