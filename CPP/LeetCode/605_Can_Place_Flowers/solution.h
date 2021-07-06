#include <vector>

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        size_t size = flowerbed.size();
        for (size_t i = 0; i < size; ++i) {
            if (flowerbed.at(i) == 0 
                    && (i == 0 || flowerbed.at(i - 1) == 0) 
                    && (i == size - 1 || flowerbed.at(i + 1) == 0)) {
                flowerbed.at(i) = 1;
                --n;
            }
            if (n <= 0) {
                return true;
            }
        }
        return false;
    }
};
