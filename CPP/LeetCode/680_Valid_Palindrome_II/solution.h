#include <string>

class Solution {
public:
    bool validPalindrome(std::string s) {
        size_t left = 0;
        size_t right = s.size() - 1;

        while (left < right)
        {
            if (s.at(left) != s.at(right))
                return isValid(s, left + 1, right) || isValid(s, left, right - 1);
            ++left;
            --right;
        }
        return true;
    }
    
    bool isValid(std::string s, size_t left, size_t right)
    {
        while (left < right)
        {
            if (s.at(left) != s.at(right))
                return false;
            ++left;
            --right;
        }
        return true;
    }
};
