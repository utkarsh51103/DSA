#include<iostream>
using namespace std;

     void merge(int arr[],int s,int e){
        int mid = s +(e-s)/2;
        int leftside = mid - s +1;
        int rightside = e - mid;

        int* first = new int[leftside];
        int* second = new int[rightside];
        int mainarraindex = s;
        for(int i=0;i<leftside;i++){
            first[i] =arr[mainarraindex++];
        }
        mainarraindex = mid+1;
        for(int i=0;i<rightside;i++){
            second[i]=arr[mainarraindex++];
        }
        int index1 = 0;
        int index2 = 0;
        mainarraindex = s;
        while(index1 < leftside && index2 < rightside){
            if(first[index1]<second[index2]){
                arr[mainarraindex++]=first[index1++];
            }
            else{
                arr[mainarraindex++]=second[index2++];
            }
        }
        while(index1 < leftside){
            arr[mainarraindex++]=first[index1++];
        }
        while(index2 < rightside){
            arr[mainarraindex++]=second[index2++];
        }
        delete[] first;
        delete[] second;
     }

   void mergesort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid  = s + (e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
   }

 int main(){
    int arr[]={8,7,6,5,4,3};
    int n = 6;
    mergesort(arr,0,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
 }