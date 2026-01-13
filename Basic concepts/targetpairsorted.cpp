#include<iostream>
using namespace std;

vector<int> pairs(vector<int> nums,int target){
  int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int s= 0;
        int e= n-1;
        while(s<e){
            int sum = nums[s]+nums[e];
            if(sum==target){
                ans.push_back(s);
                ans.push_back(e);
                return ans;
            }
            else if(sum>target){
                e--;
            }
            else{
                s++;
            }
            sum=0;
        }return ans;
    }

 int main(){
    vector<int> nums;
    for(int i=0;i<5;i++){
        int a;
        cin >> a;
        nums.push_back(a);
        a=0;
    }
    vector<int> ans = pairs(nums,7);
    for(int i=0;i<nums.size();i++){
        cout << ans[i]<<" ";
    }
 }