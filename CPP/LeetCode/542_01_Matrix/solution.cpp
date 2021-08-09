#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<std::vector<int>> vec {{0, 0, 0}, {0, 1, 0}, {1, 1, 1}};
    Solution s;
    for (auto v : s.updateMatrix(vec))
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return EXIT_SUCCESS;
}
