#include<iostream>
using namespace std;

   int partition(int arr[],int s,int e){
          int pivot =arr[s];
          int count =0;
          for(int i=s+1;i<=e;i++){
              if(arr[i]<arr[s]){
                count++;
              }
          }
          int pivotIndex = s + count;
          swap(arr[pivotIndex],arr[s]);
          int i=s;
          int j=e;
          while(i<pivotIndex && j>pivotIndex){
            while(arr[i]<arr[pivotIndex]){
                i++;
            }
            while(arr[j]<arr[pivotIndex]){
                j--;
            }
            if(i<pivotIndex && j>pivotIndex){
                swap(arr[i],arr[j]);
            }
          }
          return pivotIndex;
   }

    void quicksort(int arr[],int s,int e){
        if(s>=e){
            return;
        }
        int p = partition(arr,s,e);

        quicksort(arr,s,p-1);
        quicksort(arr,p+1,e);
    }

 int main(){
    int arr[] ={6,5,4,3,2,1};
    int n=6;
    quicksort(arr,0,n);
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }cout << endl;
 }