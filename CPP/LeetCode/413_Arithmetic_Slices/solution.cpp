#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<int> v {1, 2, 3, 4};
    Solution s;
    cout << s.numberOfArithmeticSlices(v) << endl;

    return EXIT_FAILURE;
}

