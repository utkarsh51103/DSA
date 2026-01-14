#include <iostream>
using namespace std;

void merge(vector<int> &arr,int left,int right){
    int mid = (left+right)/2;

    int left1 = mid - left + 1;
    int left2 = right - mid;

    int *first = new int[left1];
    int *second = new int[left2];

    int mainIndex = left;
    for(int i=0;i<left1;i++){
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid+1;

    for(int i=0;i<left2;i++){
        second[i]=arr[mainIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainIndex = left;

    while(index1 < left1 && index2 < left2){
        if(first[index1]<second[index2]){
            arr[mainIndex++] = first[index1++];
        }else{
            arr[mainIndex++] = second[index2++];
        }
    }

    while(index1 < left1){
        arr[mainIndex++] = first[index1++];
    }

    while(index2 < left2){
        arr[mainIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(vector<int> &arr,int left,int right){
     if(left>=right){
        return;
     }
     int mid = (left+right)/2;

     mergeSort(arr,left,mid);
     mergeSort(arr,mid+1,right);
     merge(arr,left,right);
}

int main()
{
    int n;
    cout << "Enter the size of list -> ";
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}