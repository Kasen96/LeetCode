#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::string text1 = "abcde";
    std::string text2 = "ace";
    Solution s;
    cout << s.longestCommonSubsequence(text1, text2) << endl;

    return EXIT_SUCCESS;
}
