#include <string>
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool wordBreak(std::string s, std::vector<std::string>& wordDict) {
        std::unordered_set<std::string> wordSet(wordDict.cbegin(), wordDict.cend());
        std::vector<bool> dp(s.size() + 1, false);
        dp[0] = true;

        for (int i = 0; i < dp.size(); ++i) 
        {
            for (int j = 0; j < i; ++j) 
            {
                if (dp[j] && wordSet.count(s.substr(j, i - j))) 
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        
        return dp.back();
    }
};
