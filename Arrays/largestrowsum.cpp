#include<iostream>
using namespace std;
 
 int maxiRow(int arr[][4],int n,int m){
    int maxi = 0;
    int maxiIndex=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
          sum+= arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            maxiIndex = i;
        }
    }
    cout << "maxi row sum -> " << maxi << endl;
    return maxiIndex+1;
 }

   int showElements(int arr[][4],int n,int m){
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }cout << endl;
      }return 0;
   } 
  
 int main(){
    int arr[3][4];
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin >> arr[row][col];
        }
    }
    showElements(arr,3,4);
    cout << maxiRow(arr,3,4);
 }