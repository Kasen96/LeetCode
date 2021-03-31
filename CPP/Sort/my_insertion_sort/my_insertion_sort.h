// https://sort.hust.cc/3.insertionsort

#ifndef MY_INSERTION_SORT_H
#define MY_INSERTION_SORT_H

#include <array>
#include <utility>
using std::array;

template <typename T, size_t N>
void MyInsertionSort(array<T, N> & arr)
{
    for (size_t i = 1; i < N; ++i)
    {
        int j = static_cast<int>(i - 1);
        while (j >= 0 && arr.at(j + 1) < arr.at(j))
        {
            std::swap(arr.at(j + 1), arr.at(j));
            --j;
        }
    }
}

#endif
