#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::string expression = "2-1-1";
    Solution s;
    for (auto i : s.diffWaysToCompute(expression))
    {
        cout << i << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
