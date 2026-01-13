#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int leftpart = mid - s + 1;
    int rightpart = e - mid;

    int *first = new int[leftpart];
    int *second = new int[rightpart];
    int mainarrayindex = s;
    for (int i = 0; i < leftpart; i++)
    {
        first[i] = arr[mainarrayindex++];
    }
    mainarrayindex = mid + 1;
    for (int i = 0; i < rightpart; i++)
    {
        second[i] = arr[mainarrayindex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;
    while (index1 < leftpart && index2 < rightpart)
    {
        if (first[index1] > second[index2])
        {
            arr[mainarrayindex++] = second[index2++];
        }
        else
        {
            arr[mainarrayindex++] = first[index1++];
        }
    }
    while (index1 < leftpart)
    {
        arr[mainarrayindex++] = first[index1++];
    }
    while (index2 < rightpart)
    {
        arr[mainarrayindex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}

void merge_sort(int *arr, int s, int n)
{
    if (s >= n)
    {
        return;
    }
    int mid = s + (n - s) / 2;
    merge(arr, s, mid);
    merge(arr, mid + 1, n);
    merge(arr, s, n);
}

int main()
{
    int arr[5] = {2, 7, 5, 3, 1};
    int n = 5;
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}