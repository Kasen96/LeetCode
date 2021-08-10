#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::string str = "12";
    Solution s;
    cout << s.numDecodings(str) << endl;

    return EXIT_SUCCESS;
}
