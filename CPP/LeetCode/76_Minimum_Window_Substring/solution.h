#include <string>
#include <unordered_map>

class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        std::string res = "";
        std::unordered_map<char, int> letterCnt;

        size_t left = 0, cnt = 0, minLen = s.size() + 1;

        for (const auto c : t)
        {
            ++letterCnt[c];
        }

        for (size_t i = 0; i < s.size(); ++i)
        {
            if (--letterCnt[s[i]] >=0)
            {
                ++cnt;
            }

            while (cnt == t.size())
            {
                if (minLen > i - left + 1)
                {
                    minLen = i - left + 1;
                    res = s.substr(left, minLen);
                }

                if (++letterCnt[s[left]] > 0)
                {
                    --cnt;
                }

                ++left;
            }
        }

        return res;
    }
};
