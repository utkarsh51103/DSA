//selection sort
#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {45, 32, 78, 34, 23, 12, 6};

    for (int i = 0; i < 6; i++)
    {
        int min = i;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}