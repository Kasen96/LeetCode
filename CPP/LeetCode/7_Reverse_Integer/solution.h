// 给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。
// 如果反转后整数超过 32 位的有符号整数的范围 [−2^31,  2^31 − 1] ，就返回 0。
// 假设环境不允许存储 64 位整数（有符号或无符号）。

#include <climits>

class Solution {
    public:
        int reverse1(int x) 
        {
            int result = 0;
            while (x)
            {
                if (result > INT_MAX / 10 || result < INT_MIN / 10)
                {
                    return 0;
                }
                result = result * 10 + x % 10;
                x /= 10;
            }
            return result;
        }

        int reverse2(int x)
        {
            int result = 0;
            do 
            {
                result = result * 10 + x % 10;
            } while (x /= 10);
            return (result > INT_MAX / 10 || result < INT_MIN / 10) ? 0 : result;
        }
};
