// 给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
// 回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。

#include <climits>

class Solution 
{
    public:
        bool isPalindrome(int x) 
        {
            if (x < 0)
            {
                return false;
            }

            int result = 0;
            int origin = x;
            while (x)
            {
                if (result > INT_MAX / 10 - x % 10)
                {
                    return false;
                }
                result = result * 10 + x % 10;
                x /= 10;
            }
            return origin == result;
        }
};
