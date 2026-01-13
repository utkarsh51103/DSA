#include<iostream>
using namespace std;
 

 int main(){
    vector<vector<int> > ans;
    
    for(int i=0;i<5;i++){
        ans.push_back(vector<int>(i+1,1));
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << ans[i][j] << " ";
        }cout << endl;
    }

 }