#ifndef MY_BINARY_SEARCH_H
#define MY_BINARY_SEARCH_H

#include <iostream>

template <typename T>
int MyBinarySearch(T sortedArr[], int length, T value)
{
    int head = 0;
    int tail = length - 1;
    while (head <= tail)
    {
        int mid = (head + tail) / 2;
        if (sortedArr[mid] == value)
        {
            return mid;
        }
        else if (sortedArr[mid] < value)
        {
            head = mid + 1;
        }
        else
        {
            tail = mid - 1;
        }
    }
    return -1;
}

template <typename T>
int MyBinarySearch2(T sortedArr[], int head, int tail, T value)
{
    if (head <= tail)
    {
        int mid = (head + tail) / 2;
        if (sortedArr[mid] == value)
        {
            return mid;
        }
        else if (sortedArr[mid] < value)
        {
            return MyBinarySearch2(sortedArr, mid + 1, tail, value);
        }
        else
        {
            return MyBinarySearch2(sortedArr, head, mid - 1, value);
        }
    }
    return -1;
}

#endif
