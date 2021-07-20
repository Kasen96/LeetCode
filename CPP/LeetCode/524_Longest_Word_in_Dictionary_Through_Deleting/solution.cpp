#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<std::string> v {"ale", "apple", "monkey", "plea"};
    std::string str = "abpcplea";
    Solution s;

    cout << s.findLongestWord(str, v) << endl;

    return EXIT_SUCCESS;
}
