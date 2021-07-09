#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    std::string S = "ababcbacadefegdehijhklij";
    Solution s;
    std::vector<int> v = s.partitionLabels(S);
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}
