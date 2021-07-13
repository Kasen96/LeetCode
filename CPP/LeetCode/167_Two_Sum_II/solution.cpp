#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) 
{
    std::vector<int> v {2, 7, 11, 15};
    int target = 9;
    Solution s;

    for (auto i : s.twoSum(v, target))
    {
        cout << i << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
