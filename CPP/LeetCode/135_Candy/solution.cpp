#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
    std::vector<int> ratings{1, 0, 2};
    Solution s;
    cout << s.candy(ratings) << endl;

    return EXIT_SUCCESS;
}
