#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<int> v {2, 7, 9, 3, 1};
    Solution s;
    cout << s.rob(v) << endl;
    cout << s.rob2(v) << endl;

    return EXIT_SUCCESS;
}
