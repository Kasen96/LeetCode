#include "my_selection_sort.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    vector<int> v = {10, 9 ,8, 7, 6, 5, 4, 3, 2, 1};
    MySelectionSort(v);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
