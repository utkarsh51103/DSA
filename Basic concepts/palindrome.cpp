#include<iostream>
using namespace std;

 bool palindrome(int x){
         int a=x;
          int count=0;
         while(a>0){
             a=a/10;
             count++;
         }
        int arr[count];
         for(int i=0;i<count;i++){
             arr[i]=x%10;
           x=x/10;
         }
         int s=0;
         int e=count-1;
          while(s<e){
              if(arr[s]==arr[e]){
                s++;
                e--;
              }
                else {return false;}
          }return true;
 }

 int main(){
     cout << palindrome(121)<< endl;
//     int x= 121;
//     int a=x;
//           int count=0;
//          while(a>0){
//              a=a/10;
//              count++;
             
//  }
//          int arr[count];
//          for(int i=0;x>0;i++){
//             int b=x%10;
//              arr[i]=b;
//            x=x/10;
//            cout << x <<endl;
//            cout << arr[i] << endl;
//          }
//         //  for(int i=0;i<count;i++){
//         //     cout << arr[i] << " ";
//         //  }
 }