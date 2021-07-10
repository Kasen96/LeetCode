#include "solution.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    Solution s;
    cout << std::boolalpha;
    cout << (s.reverse1(123) == 321) << endl;
    cout << (s.reverse1(-123) == -321) << endl;
    cout << (s.reverse1(120) == 21) << endl;
    cout << (s.reverse1(0) == 0) << endl;
    cout << std::noboolalpha;

    cout << std::boolalpha;
    cout << (s.reverse2(123) == 321) << endl;
    cout << (s.reverse2(-123) == -321) << endl;
    cout << (s.reverse2(120) == 21) << endl;
    cout << (s.reverse2(0) == 0) << endl;
    cout << std::noboolalpha;

    return EXIT_SUCCESS;
}
