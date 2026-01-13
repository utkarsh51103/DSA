// find the peak of a monotonic functioninng array
#include<iostream> 
using namespace std;
 int peak(int arr[], int size){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
     while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
     }return s;
 }
 int main(){
    int a[8]={1,2,3,4,3,3,2};
    int ans = peak(a,8);
    cout << a[ans];
 }