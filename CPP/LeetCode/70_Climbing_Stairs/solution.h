#include <vector>

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;
        std::vector<int> dp(n);
        dp.at(0) = 1;
        dp.at(1) = 2;
        for (int i = 2; i < n; ++i)
        {
            dp.at(i) = dp.at(i - 1) + dp.at(i - 2);
        }
        return dp.back();
    }

    /*
    * 我们可以对空间进行进一步优化，只用两个整型变量 a 和 b 来存储过程值，
    * 首先将 a+b 的值赋给b，然后 a 赋值为原来的b，所以应该赋值为 b-a 即可。
    * 这样就模拟了上面累加的过程，而不用存储所有的值
    */
    int climbStairs2(int n) {
        if (n <= 2)
            return n;
        int a = 1;
        int b = 2;
        for (int i = 2; i < n; ++i)
        {
            b = a + b;
            a = b - a;
        }
        return b;
    }
};
