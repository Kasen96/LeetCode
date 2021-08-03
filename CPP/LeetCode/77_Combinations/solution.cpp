#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    int n = 5;
    int k = 3;
    Solution s;
    for (const auto v : s.combine(n, k))
    {
        for (const int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return EXIT_SUCCESS;
}
