#include<iostream>
using namespace std;
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        vector<int> nums3;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                j++;
            }
            
        }
        
        while(i<m){
            nums3.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            nums3.push_back(nums2[j]);
            j++;
        }
        // cout << nums1.size();

        nums1 = nums3;
    }
    void print(vector<int> arr1){
        int n=arr1.size();
    for(int i=0;i<=n-1;i++){
        cout << arr1[i] << " ";
    }cout << endl;
 }
 int main(){
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(5);
    nums2.push_back(2);
    nums2.push_back(4);
    nums2.push_back(6);

    merge(nums1,6,nums2,3);
    print(nums1);
 }