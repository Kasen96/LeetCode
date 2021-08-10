#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::string str = "applepenapple";
    std::vector<std::string> wordDit {"apple", "pen"};
    Solution s;
    cout << std::boolalpha << s.wordBreak(str, wordDit) << std::noboolalpha << endl;

    return EXIT_SUCCESS;
}
