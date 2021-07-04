#include <string>

class Solution
{
public:
    int romanToInt(std::string s)
    {
        int result = 0;
        for (auto iter = s.crbegin(); iter != s.crend(); ++iter)
        {
            switch (*iter)
            {
            case 'I':
                result += (result >= 5 ? -1 : 1);
                break;
            case 'V':
                result += 5;
                break;
            case 'X':
                result += 10 * (result >= 50 ? -1 : 1);
                break;
            case 'L':
                result += 50;
                break;
            case 'C':
                result += 100 * (result >= 500 ? -1 : 1);
                break;
            case 'D':
                result += 500;
                break;
            case 'M':
                result += 1000;
                break;
            }
        }
        return result;
    }
};