#include<iostream>
using namespace std;
 
 bool searchMatrix(int matrix[3][4], int target) {
        int row=3;
        int col=4;

        int start=0;
        int end=(row*col)-1;
         
         int mid= start +(end-start)/2;
       while(start<=end){
           int element = matrix[mid/col][mid%col];
           if(element == target){
               return 1;
           }
           if(element < target){
                start = mid+1;
           }
           else{
               end = mid-1;
           }
           mid= start +(end-start)/2;
        }return 0;
       }

  int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
          }
    }
    int t;
    cout << "enter element to be searched"<< endl;
    cin >> t;
    
    cout << "Element found or not -> "<< searchMatrix(arr,t)<<endl;

  }