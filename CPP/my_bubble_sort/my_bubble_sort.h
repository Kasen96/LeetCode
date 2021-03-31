// https://sort.hust.cc/1.bubblesort

#ifndef MY_BUBBLE_SORT_H
#define MY_BUBBLE_SORT_H

#include <array>
#include <utility>
using std::array;

template <typename T, size_t N>
void MyBubbleSort(array<T, N> & arr)
{
    for (size_t i = 0; i < N - 1; ++i)
    {
        for (size_t j = 0; j < N - 1 - i; ++j)
        {
            if (arr.at(j) > arr.at(j + 1))
            {
                std::swap(arr.at(j), arr.at(j + 1));
            }
        }
    }
}

#endif
