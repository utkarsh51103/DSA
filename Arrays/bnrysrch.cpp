#include<iostream>
using namespace std;
 
 int binarysearch(int ar[] , int size, int key){
    int start = 0;
    int end = size-1;
     int mid = start + (end - start)/2;

     while(start <= end){
        if(ar[mid] == key){
            return mid;
        }
        if(key > mid){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    
     }return -1;
 }
  int main(){
    int arr[10]={12,3,4,45,56,6};
     
     int answer = binarysearch(arr, 6, 40);
      cout << "the required key is " << answer << endl;

  }


  