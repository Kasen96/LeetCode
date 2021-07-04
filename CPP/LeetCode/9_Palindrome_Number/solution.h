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
