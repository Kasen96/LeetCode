#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<int> v1 {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> v2 {2, 5, 6};
    int n = static_cast<int>(v2.size());

    Solution s;
    s.merge(v1, m, v2, n);

    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
