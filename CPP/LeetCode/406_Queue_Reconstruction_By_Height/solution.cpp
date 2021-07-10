#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    std::vector<std::vector<int>> v {{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
    Solution s;

    for (const auto r : s.reconstructQueue1(v)) {
        cout << "{" << r.at(0) << ", " << r.at(1) << "} ";
    }
    cout << endl;
    for (const auto r : s.reconstructQueue2(v)) {
        cout << "{" << r.at(0) << ", " << r.at(1) << "} ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
