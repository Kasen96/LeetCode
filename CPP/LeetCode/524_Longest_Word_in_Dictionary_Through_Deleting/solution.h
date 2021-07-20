#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::string findLongestWord(std::string s, std::vector<std::string>& dictionary) {
        std::sort(dictionary.begin(), dictionary.end(), 
            [](std::string a, std::string b){
                if (a.size() == b.size())
                    return a < b;
                return a.size() > b.size();
            });

        for (std::string str : dictionary)
        {
            size_t i = 0;
            for (char c : s)
            {
                if (i < str.size() && str.at(i) == c)
                    ++i;
            }
            if (i == str.size())
                return str;
        }
        return "";
    }
};
