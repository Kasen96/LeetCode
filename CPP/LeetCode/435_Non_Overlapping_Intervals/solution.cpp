#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    std::vector<std::vector<int>> v {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    Solution s;
    cout << s.eraseOverlapIntervals(v) << endl;

    return EXIT_SUCCESS;
}
