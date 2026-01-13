#include<iostream>
using namespace std;

 void merge(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
    int k=0;
    while(i<n && j<m){
        int temp=arr1[i];
        if(arr1[i]<arr2[j]){
            arr1[k]=temp;
            k++;
            i++;
        }
        else{
            arr1[k]=arr2[j];
            k++;
            j++;
        }
        
    }
    while(i<n){
        arr1[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n){
        arr1[k]=arr2[j];
        k++;
        j++;
    }

 }
 void print(int arr1[],int n){
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }cout << endl;
 }
 int main(){
    int arr1[6]={1,3,5};
    int arr2[3]={2,4,6};
    merge(arr1,6,arr2,3);
    print(arr1,6);
 }