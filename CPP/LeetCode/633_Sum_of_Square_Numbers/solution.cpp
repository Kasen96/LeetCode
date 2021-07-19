#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    int c = 5;
    Solution s;
    cout << std::boolalpha << s.judgeSquareSum1(c) << std::noboolalpha << endl;
    cout << std::boolalpha << s.judgeSquareSum2(c) << std::noboolalpha << endl;
    cout << std::boolalpha << s.judgeSquareSum3(c) << std::noboolalpha << endl;

    return EXIT_SUCCESS;
}
