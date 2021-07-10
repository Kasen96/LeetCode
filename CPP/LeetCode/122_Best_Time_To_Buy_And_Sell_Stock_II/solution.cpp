#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {

    std::vector<int> v {7, 1, 5, 3, 6, 4};
    Solution s;
    cout << s.maxProfit(v) << endl;

    return EXIT_SUCCESS;
}
