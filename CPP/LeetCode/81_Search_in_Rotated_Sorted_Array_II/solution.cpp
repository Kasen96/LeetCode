#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<int> v {1,1,1,1,1,1,1,1,1,13,1,1,1,1,1,1,1,1,1,1,1,1};
    int target = 13;
    Solution s;
    cout << std::boolalpha << s.search(v, target) << std::noboolalpha << endl;

    return EXIT_SUCCESS;
}

