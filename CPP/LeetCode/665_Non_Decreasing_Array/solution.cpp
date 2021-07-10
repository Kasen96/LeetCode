#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    std::vector<int> v {3, 4, 2, 3};
    Solution s;
    cout << std::boolalpha << s.checkPossibility(v) << std::noboolalpha << endl;

    return EXIT_SUCCESS;
}
