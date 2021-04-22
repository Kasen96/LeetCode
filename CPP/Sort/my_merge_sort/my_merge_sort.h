// https://sort.hust.cc/5.mergesort

#ifndef MY_MERGE_SORT_H
#define MY_MERGE_SORT_H

void MergeArray(int arr[], int start, int mid, int end)
{   
    const int llen = mid - start + 1;
    const int rlen = end - mid;

    int larr[llen], rarr[rlen];

    for (int i = 0; i < llen; ++i)
    {
        larr[i] = arr[start + i];
    }

    for (int j = 0; j < rlen; ++j)
    {
        rarr[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = start;

    while (i < llen && j < rlen)
    {
        if (larr[i] <= rarr[j])
        {
            arr[k] = larr[i];
            ++i;
        }
        else
        {
            arr[k] = rarr[j];
            ++j;
        }
        ++k;
    }

    while (i < llen) 
    {
        arr[k] = larr[i];
        ++i;
        ++k;
    }

    while (j < rlen)
    {
        arr[k] = rarr[j];
        ++j;
        ++k;
    }

}

void MyMergeSort(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;

    if (start < end)
    {
        MyMergeSort(arr, start, mid);
        MyMergeSort(arr, mid + 1, end);
        MergeArray(arr, start, mid, end);
    }
}

#endif
