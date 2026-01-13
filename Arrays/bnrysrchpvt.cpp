// find the pivo of a  given array
#include<iostream>
using namespace std;

 int pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }return e;
 }
 int main(){
    int arr[10]= {7,8,9,10,11,1,2,3,4};
    int ans= pivot(arr,10);
    // cout << arr[ans] << endl;
 }