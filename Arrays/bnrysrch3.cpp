//find the first and last occurence of an element / total occurence of an element in array
#include<iostream> 
using namespace std;

 int fstocc(int arr[], int size, int key){
    int s=0;
    int e= size -1;
    int ans = -1;
    int mid = s + (e-s)/2;
       while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key<arr[mid]){
            e = mid -1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
         mid = s + (e-s)/2;

       }
       return ans;
 }
  int lstocc(int arr[], int size, int key){
    int s=0;
    int e= size -1;
    int ans = -1;
    int mid = s + (e-s)/2;
       while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(key<arr[mid]){
            e = mid -1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
         mid = s + (e-s)/2;

       }
       return ans;
 }
//  int main(){                     (this is for first and lst element)
//     int arr[10]={1,3,3,3,3,6};
       
//        int ans1 = fstocc(arr,6,3);
//        int ans2 = lstocc(arr,6,3);
//        cout << ans1 << endl << ans2<<endl;
//  }
//   int main(){                    (this is for total occurence)
//     int arr[10]={1,3,3,3,3,6};
       
//        int ans1 = fstocc(arr,6,3);
//        int ans2 = lstocc(arr,6,3);
//  cout << "total occurence of the number is "<< (ans2-ans1)+1 << endl;
//   }