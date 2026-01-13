#include<iostream>
using namespace std;

   int sumto(int arr[],int size){
    int ans =0;
    if(size==0)
    return 0;
    if(size==1)
    return arr[0];
    int remai = sumto(arr+1,size-1);
    ans = arr[0] + remai;
    return ans;
    
}

 int main(){
    int arr[5] = {1,2,3,6,5};
    int size = 5;
     cout << sumto(arr,size);
 }