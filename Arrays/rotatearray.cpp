#include<iostream>
using namespace std;

    vector<int> arrayRotate(vector<int> nums, int k){
        vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]= nums[i];

        }
        nums = temp;
        return nums;
    }
void answer(vector<int> nums){
    int n = nums.size();
    for(int i=0;i<n;i++){
        cout << nums.at(i)<< " ";
    }
    cout << endl;
}
  
 int main(){
    int k,n;
    // cout << "Enter the number of elements"<< endl;
    // cin >> n;
    cout << "enter the number of elements to rotate"<< endl;
    cin >> k;
    vector<int> nums;
    //  for(int i=0;i<n;i++){
    //     cin >> nums.at(i);
    //  }
     nums.push_back(4);
     nums.push_back(5);
     nums.push_back(6);
     nums.push_back(7);
     nums.push_back(8);
     vector<int> ans = arrayRotate(nums,k);
     answer(ans);
 }