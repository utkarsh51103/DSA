#include<iostream>
using namespace std;

   int sumzero(int arr[]){
    int s=0;
    int e= arr.length()-1;
     while(s<e){
        int sum = arr[s]+arr[e];
        if(sum==0){
            ar[0]{s,e};
        }
        else if(sum<0){
            s++;
        }
        else{
            e--;
        }
     }
   }

int main(){
    int arr[4]={-2,-1,1,2};
    int arr[2] = sumzero(arr);
}