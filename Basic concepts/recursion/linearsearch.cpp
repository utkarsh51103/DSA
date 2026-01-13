#include<iostream>
using namespace std;

    bool linear(int arr[],int size,int target){
        if(size==0)
        return false;
        if(arr[0]==target)
        return true;
        else{
            bool remain = linear(arr+1,size-1,target);
            return remain;
        }
    }

 int main(){
    int arr[5] = {1,4,7,5,4};
    int size =5;
    cout << linear(arr,size,3)<<endl;

    
 }