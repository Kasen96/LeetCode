#include "solution.h"
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    Solution s;

    vector<int> v1{2, 7, 11, 15};
    cout << std::boolalpha << (s.twoSum(v1, 9) == vector<int>{0, 1}) << std::noboolalpha << endl;

    vector<int> v2{3, 2, 4};
    cout << std::boolalpha << (s.twoSum(v2, 6) == vector<int>{1, 2}) << std::noboolalpha << endl;

    vector<int> v3{3, 3};
    cout << std::boolalpha << (s.twoSum(v3, 6) == vector<int>{0, 1}) << std::noboolalpha << endl;

    return 0;
}
