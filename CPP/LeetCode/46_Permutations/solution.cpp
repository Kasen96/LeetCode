#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<int> v {1, 2, 3};
    Solution s;
    for (const auto vec : s.permute(v))
    {
        for (const int i : vec)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return EXIT_SUCCESS;
}
