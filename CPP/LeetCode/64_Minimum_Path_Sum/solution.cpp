#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<std::vector<int>> v {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    Solution s;
    cout << s.minPathSum(v) << endl;
    cout << s.minPathSum2(v) << endl;

    return EXIT_SUCCESS;
}
