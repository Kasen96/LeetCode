#ifndef MY_SELECTION_SORT_H
#define MY_SELECTION_SORT_H

#include <vector>
#include <utility>
using std::vector;

template <typename T>
void MySelectionSort(vector<T> & data)
{
    for (size_t i = 0; i < data.size(); ++i)
    {
        size_t min = i;
        for (size_t j = i + 1; j < data.size(); ++j)
        {
            if (data.at(j) < data.at(min))
            {
                min = j;
            }
        }
        std::swap(data.at(i), data.at(min));
    }
}

#endif
