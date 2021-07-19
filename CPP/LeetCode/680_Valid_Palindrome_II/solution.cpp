#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::string str = "abca";
    Solution s;
    cout << std::boolalpha << s.validPalindrome(str) << std::noboolalpha << std::endl;

    return EXIT_SUCCESS;
}
