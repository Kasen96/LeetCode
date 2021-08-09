#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    std::vector<std::vector<char>> vec {{'1', '0', '1', '0', '0'}, 
                                        {'1', '0', '1', '1', '1'},
                                        {'1', '1', '1', '1', '1'},
                                        {'1', '0', '0', '1', '0'}};
    std::vector<std::vector<char>> vec2 {{'0', '1'}, {'1', '0'}};
    Solution s;
    cout << s.maximalSquare(vec) << endl;

    return EXIT_SUCCESS;
}
