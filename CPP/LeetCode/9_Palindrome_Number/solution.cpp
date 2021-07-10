#include "solution.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    Solution s;
    cout << std::boolalpha;
    cout << s.isPalindrome(121) << endl;
    cout << s.isPalindrome(-121) << endl;
    cout << s.isPalindrome(10) << endl;
    cout << s.isPalindrome(-101) << endl;
    cout << std::noboolalpha;

    return EXIT_SUCCESS;
}
