#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]){
    std::vector<int> v {1, 0, 0, 0, 1};
    int n = 1;
    Solution s;
    cout << std::boolalpha << s.canPlaceFlowers(v, n) << std::noboolalpha << endl;

    return EXIT_SUCCESS;
}
