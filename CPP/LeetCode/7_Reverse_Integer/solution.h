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
