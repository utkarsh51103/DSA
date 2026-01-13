#include<iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int leftside = mid - s + 1;
    int rightside = e - mid;

    int *first = new int[leftside];
    int *second = new int[rightside];
    int mainarrayindex = s;
    for (int i = 0; i < leftside; i++)
    {
        first[i] = arr[mainarrayindex++];
    }
    mainarrayindex = mid + 1;
    for (int i = 0; i < rightside; i++)
    {
        second[i] = arr[mainarrayindex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;
    while (index1 < leftside && index2 < rightside)
    {
        if (first[index1] < second[index2])
        {
            arr[mainarrayindex++] = first[index1++];
        }
        else
        {
            arr[mainarrayindex++] = second[index2++];
        }
    }
    while (index1 < leftside)
    {
        arr[mainarrayindex++] = first[index1++];
    }
    while (index2 < rightside)
    {
        arr[mainarrayindex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}

void merge_sort(int *arr, int s, int e)
{
    
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    merge_sort(arr, s, mid);
    merge_sort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = 10;
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}