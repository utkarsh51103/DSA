#include<iostream>
using namespace std;

   bool ispossible(int ar[],int n,int m,int mid){

     int studcount = 0;
     int pagesum = 0;
      
      for(int j=0;j<n;j++){
        if((pagesum + ar[j]) <= mid){
            pagesum +=ar[j];
        }
        else{
            studcount++;
            if (studcount>m || ar[j]>mid)
            {
                return false;
            }
            pagesum = ar[j];
            
        }
      }
      return true;
   }

    int bkall(int arr[], int size, int m){
              int s=0;
              int ans=-1;
              int sum=0;
              for(int i=0;i<size;i++){
                sum += arr[i];
              }
              int e = sum;
              int mid = s +(e-s)/2;
              while(s<=e){
                if(ispossible(arr,size,m,mid)){
                  ans=mid;
                  e=mid-1;
              }
              else{
                s=mid+1;
              }
              mid = s +(e-s)/2;

    }return ans;
    };
 int main(){
    int arr[10]={10,20,30,40,50};
    int ans=bkall(arr,10,2);
    cout << ans<< endl;
 }