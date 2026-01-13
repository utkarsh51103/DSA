#include<iostream>
using namespace std;

 int bianrysearch( int arr[], int size , int key){
    int start = 0;
    int end= size -1;
    int mid = start + (end - start)/2;
     while(start <= end){
        if(arr[key] == mid){
            return mid;
        }
        if(key < mid){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid= start + (end-start)/2;
     }return -1;
 }

 int main(){
    int arr[10]={1,2,3,4,5,6,7,7,8,9};
     int ans = bianrysearch(arr , 10 , 8);
     cout << ans << endl;
 }