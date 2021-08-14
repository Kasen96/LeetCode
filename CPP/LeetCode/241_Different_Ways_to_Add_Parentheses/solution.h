#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> diffWaysToCompute(std::string expression) {
        std::vector<int> res;

        for (std::size_t i = 0; i < expression.size(); ++i)
        {
            char c = expression.at(i);

            if (c == '+' || c == '-' || c == '*')
            {
                std::vector<int> left = diffWaysToCompute(expression.substr(0, i));
                std::vector<int> right = diffWaysToCompute(expression.substr(i + 1));
                for (const int &l : left)
                {
                    for (const int &r : right)
                    {
                        switch (c)
                        {
                            case '+':
                                res.push_back(l + r);
                                break;
                            case '-':
                                res.push_back(l - r);
                                break;
                            case '*':
                                res.push_back(l * r);
                                break;
                        }
                    }
                }
            }
        }
        if (res.empty())
            res.push_back(std::stoi(expression));
        return res;
    }
};
