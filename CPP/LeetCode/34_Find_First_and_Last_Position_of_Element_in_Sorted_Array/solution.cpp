#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<int> v {5, 7, 7, 8, 8, 10};
    int target = 8;
    Solution s;
    for (const auto i : s.searchRange(v, target))
    {
        cout << i << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
