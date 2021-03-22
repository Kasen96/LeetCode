#include "my_binary_search.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(arr) / sizeof(int);
    cout << "Index: " << MyBinarySearch(arr, length, 7) + 1 << endl;

    cout << "Index: " << MyBinarySearch2(arr, 0, length - 1, 7) + 1 << endl;

    return 0;
}
