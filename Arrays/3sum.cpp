#include<iostream>
using namespace std;
  
    vector<vector<int> > threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int> > ans;
        vector<int> temp;
        for(int i=0;i<n;i++){
             int a = nums[i];
             int t =  -a;
             int s=i+1,e=n-1;
             while(s<e){
                 if(nums[s]+nums[e]==t){
                     ans.push_back({nums[i],nums[s],nums[e]});
                      while(s<e&&nums[s+1]==nums[s])s++;
                      while(s<e&&nums[e-1]==nums[e])e--;
                     s++;
                     e--;
                 }
                 else if(nums[s]+nums[e]>t){
                     e--;
                 }
                 else{
                     s++;
                 }
                 while(i<n-1 && nums[i+1]==nums[i])i++;
             }  
        }return ans;
    }
  
  int main(){
      vector<int> nums;
      for(int i=0;i<5;i++){
        int n;
        cin >> n;
        nums.push_back(n);
      }
     vector<vector<int> > ans = threeSum(nums);
     for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();i++){
            cout << ans[i][j]<< " ";
        }cout << endl;
     }
  }