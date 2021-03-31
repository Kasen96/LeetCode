#include "my_bubble_sort.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    array<int, 10> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    MyBubbleSort(arr);

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
