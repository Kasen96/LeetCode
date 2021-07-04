#include <string>
#include <vector>

class Solution 
{
public:
    std::string longestCommonPrefix(std::vector<std::string> & strs) 
    {
        if (strs.empty())
        {
            return "";
        }

        for (size_t i = 0; i < strs.front().size(); ++i)
        {
            for (const auto & str : strs)
            {
                if (i == str.size() || str.at(i) != strs.front().at(i))
                {
                    return strs.front().substr(0, i);
                }
            }
        }
        return strs.front();
    }

    std::string longestCommonPrefix2(std::vector<std::string> & strs)
    {
        std::string prefix = "";
        if (strs.empty())
        {
            return prefix;
        }

        for (size_t i = 1; i <= strs.front().size(); ++i)
        {
            std::string p = strs.front().substr(0, i);
            bool match = true;
            for (size_t j = 1; j < strs.size(); ++j)
            {
                if (i > strs.at(j).size() || p != strs.at(j).substr(0, i))
                {
                    match = false;
                    break;
                }
            }
            if (!match)
            {
                return prefix;
            }
            prefix = p;
        }
        return prefix;
    }
};