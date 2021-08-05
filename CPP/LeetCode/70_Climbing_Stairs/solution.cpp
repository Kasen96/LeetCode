#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    int n = 3;
    Solution s;
    cout << s.climbStairs(n) << endl;
    cout << s.climbStairs2(n) << endl;

    return EXIT_SUCCESS;
}
