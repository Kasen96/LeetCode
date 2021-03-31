#ifndef MY_QUICK_SORT_H
#define MY_QUICK_SORT_H

#include <vector>
#include <utility>
using std::vector;

template <typename T>
int Partition(vector<T> & data, int start, int end)
{
    int pivot = end;
    int j = start;
    for (int i = start; i < end; ++i)
    {
        if (data.at(i) < data.at(pivot))
        {
            std::swap(data.at(i), data.at(j));
            ++j;
        }
    }
    std::swap(data.at(j), data.at(pivot));
    return j;
}

template <typename T>
void MyQuickSort(vector<T> & data, int start, int end)
{
    if (start < end)
    {
        int p = Partition(data, start, end);
        MyQuickSort(data, start, p - 1);
        MyQuickSort(data, p + 1, end);
    }
}

#endif
