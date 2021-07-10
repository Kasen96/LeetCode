#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> reconstructQueue1(std::vector<std::vector<int>>& people) {
        std::sort(people.begin(), people.end(), [](std::vector<int> &a, std::vector<int> &b){
                return a.at(0) > b.at(0) || (a.at(0) == b.at(0) && a.at(1) < b.at(1));
            });
        std::vector<std::vector<int>> res;

        for (const auto p : people) {
            res.insert(res.cbegin() + p.at(1), p);
        }

        return res;
    }

    std::vector<std::vector<int>> reconstructQueue2(std::vector<std::vector<int>>& people) {
        std::sort(people.begin(), people.end(), [](std::vector<int> &a, std::vector<int> &b){
                return a.at(0) > b.at(0) || (a.at(0) == b.at(0) && a.at(1) < b.at(1));
            });
        
        for (size_t i = 0; i < people.size(); ++i) {
            const auto p = people.at(i);

            if (p.at(1) != i) {
                people.erase(people.cbegin() + i);
                people.insert(people.cbegin() + p.at(1), p);
            }
        }

        return people;
    }
};
