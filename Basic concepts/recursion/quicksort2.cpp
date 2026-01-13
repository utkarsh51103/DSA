#include<iostream>
using namespace std;
  
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int count =0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<arr[s]){
            count++;
        }
    }
    int i=s;
    int j=e;
    int pivotindex = s + count;
    swap(arr[pivotindex],arr[s]);
    while(i < pivotindex && j> pivotindex){
        while(arr[i]<arr[pivotindex]){
            i++;
        }
        while(arr[j]>arr[pivotindex]){
            j--;
        }
        if(i < pivotindex && j> pivotindex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotindex;
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
    
    //  int n;
    //  cin >> n;
    //  cout << "your array is of size " << n << endl;
    //  int arr[n];
    //  for(int i=0;i<n;i++){
    //     int s;
    //     cin >> s;
    //     arr[i]=s;
    //  }
    int arr[]={7,5,4,34,3,2};
    int n=6;
     quicksort(arr,0,n);
     for(int i=0;i<n;i++){
        cout << arr[i] << " ";
     }   cout << endl;
 }