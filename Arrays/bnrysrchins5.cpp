// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
#include<iostream>
using namespace std;

int searchInsert(int nums[],int size, int target) {
        int n=size;
        int l=0,r=n-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target) return m;
            if(nums[m]<target) l= m+1;
            else r=m-1;
        }
        return l;
    }

    int main(){
        int arr[10]={1,2,3,4,5,6,7,8,9};
        int ans = searchInsert(arr,9,10);
        cout << ans;
    }