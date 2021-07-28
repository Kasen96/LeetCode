#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<int> v {1, 1, 1, 2, 2, 3};
    int k = 2;
    Solution s;
    for (const auto i : s.topKFrequent(v, k))
    {
        cout << i << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
