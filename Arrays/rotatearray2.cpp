#include<iostream>
#include<vector>
using namespace std;

     int main(){
        int k;
        cin >> k;
        vector<int> nums(8);
        vector<int> temp(8);
        nums.push_back(2);
        nums.push_back(3);
        nums.push_back(4);
        nums.push_back(5);
        for(int i=0;i<nums.size(); i++){
            cout << nums.at(i)<< " ";
        }
        cout << endl;
        // nums.push_back(6);
        for(int i=1;i<=nums.size();i++){
            temp[(i+k)%nums.size()]= nums[i];

        }
        nums = temp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            cout << temp.at(i) << " ";

        }
        cout << endl;
        
    }