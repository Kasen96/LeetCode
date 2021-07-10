#include "solution.h"
#include <iostream>

using std::cout;
using std::endl;


int main(int argc, char* argv[])
{
    Solution s;
    cout << std::boolalpha;
    cout << (s.romanToInt("III") == 3) << endl;
    cout << (s.romanToInt("IV") == 4) << endl;
    cout << (s.romanToInt("IX") == 9) << endl;
    cout << (s.romanToInt("LVIII") == 58) << endl;
    cout << (s.romanToInt("MCMXCIV") == 1994) << endl;
    cout << std::noboolalpha;

    return EXIT_SUCCESS;
}
