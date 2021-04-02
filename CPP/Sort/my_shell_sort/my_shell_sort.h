// https://sort.hust.cc/4.shellsort
// https://www.cnblogs.com/chengxiao/p/6104371.html

#ifndef MY_SHELL_SORT_H
#define MY_SHELL_SORT_H

#include <array>
#include <utility>
using std::array;

template <typename T, size_t N>
void MyShellSort(array<T, N> & arr)
{
    size_t gap = 1;
    
    while (gap < N / 2)
    {
        gap = gap * 2;
    }

    while (gap >= 1)
    {
        for (size_t i = gap; i < N; ++i)
        {
            for (size_t j = i; j >= gap && arr.at(j) < arr.at(j -gap); j -= gap)
            {
                std::swap(arr.at(j), arr.at(j - gap));
            }
        }
        gap = gap / 2;
    }
}

#endif
