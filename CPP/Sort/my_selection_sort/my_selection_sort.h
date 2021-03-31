// https://sort.hust.cc/2.selectionsort

#ifndef MY_SELECTION_SORT_H
#define MY_SELECTION_SORT_H

#include <array>
#include <utility>
using std::array;

template <typename T, size_t N>
void MySelectionSort(array<T, N> &arr)
{
    for (size_t i = 0; i < N; ++i)
    {
        size_t min = i;
        for (size_t j = i + 1; j < N; ++j)
        {
            if (arr.at(j) < arr.at(min))
            {
                min = j;
            }
        }
        std::swap(arr.at(i), arr.at(min));
    }
}

#endif
