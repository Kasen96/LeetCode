#include "solution.h"

#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    std::vector<int> g{1, 2, 3};
    std::vector<int> s{1, 2};

    Solution solution;
    cout << solution.findContentChildren(g, s) << endl;

    return EXIT_SUCCESS;
}