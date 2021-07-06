#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    std::vector<std::vector<int>> v {{10, 16}, {2, 8}, {1, 6}, {7, 12}};

    Solution s;
    cout << s.findMinArrowShots(v) << endl;

    return EXIT_SUCCESS;
}
