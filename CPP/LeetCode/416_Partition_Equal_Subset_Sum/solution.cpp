#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<int> v {1, 5, 11, 5};
    Solution s;
    cout << std::boolalpha << s.canPartition(v) << std::noboolalpha << endl;

    return EXIT_SUCCESS;
}
