//move zeroes to the end
#include<iostream>
using namespace std;

 int main(){
    int arr[6]={0,4,3,0,0,5};
    int nonzero = 0;
    for(int i=0;i<6;i++){
         if(arr[i] != 0){
            swap(arr[i], arr[nonzero]);
            nonzero++;
         }
    }
    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
 }