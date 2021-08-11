#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<int> v {10, 9, 2, 5, 3, 7, 101, 18};
    Solution s;
    cout << s.lengthOfLIS(v) << endl;


    return EXIT_SUCCESS;
}
