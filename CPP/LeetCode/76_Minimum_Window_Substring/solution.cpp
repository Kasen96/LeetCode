#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::string s = "ADOBECODEBANC";
    std::string t = "ABC";

    Solution solution;
    cout << solution.minWindow(s, t) << endl;

    return EXIT_SUCCESS;
}
