#include "solution.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    Solution s;
    cout << std::boolalpha;
    cout << (s.isValid("()")) << endl;
    cout << (s.isValid("()[]{}")) << endl;
    cout << (s.isValid("(]")) << endl;
    cout << (s.isValid("([)]")) << endl;
    cout << (s.isValid("{[]}")) << endl;
    cout << std::noboolalpha;

    return 0;
}

