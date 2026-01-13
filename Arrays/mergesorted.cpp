//mergeing of 2 sorted arrays
#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
            
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m){   
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    }
    void print(int arr3[], int n)
{
    for (int i = 0; i<n; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[3] = {23, 45, 67};
    int arr2[4] = {12,22, 45, 51};
    int arr3[7];
    merge(arr1, 3, arr2, 4, arr3);
    print(arr3, 7);
}