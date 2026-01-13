#include<iostream>
using namespace std;
 
   int getSum(int* arr,int n){
      int sum=0;
     for(int i=0;i<n;i++){
        sum += arr[i];
     }
     return sum;
   }

 int main(){
    int* p = new int[10];
      int n;
      cin >> n;
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    getSum(p,n);

    for(int j=0;j<n;j++){
    cout << p[j] << " ";
} 
    cout<<getSum(p,n) <<endl;
 }