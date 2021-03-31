#include "solution.h"
#include <iostream>

using std::cout;
using std::endl;


int main(int argc, char* argv[])
{
    Solution s;
    cout << std::boolalpha;
    vector<string> v1 {"flower", "flow", "flight"};
    cout << (s.longestCommonPrefix(v1) == "fl") << endl;
    vector<string> v2 {"dog", "racecar", "car"};
    cout << (s.longestCommonPrefix(v2) == "") << endl;
    cout << std::noboolalpha;

    return 0;
}
