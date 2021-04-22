#include "my_merge_sort.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    MyMergeSort(arr, 0, len - 1);
    for (int i = 0; i < len; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

