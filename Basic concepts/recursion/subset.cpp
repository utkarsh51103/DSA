//working on leetcode
#include<iostream>
using namespace std;
   void solve(vector<int> v,vector<int> output,int index,vector<vector<int> >& ans){
    if(index>=v.size()){
        ans.push_back(output);
        return ;
    }
    solve(v,output,index+1,ans);
    int element = v[index];
    output.push_back(element);
    solve(v,output,index+1,ans);
   }

  vector<vector<int> > subset(vector<int> v){
    
    vector<int> output;
    vector<vector<int> > ans;
    
    int index =0;
    solve(v,output,index,ans);
    return ans;
  }

int main(){
    vector<int> vtr;
   for(int i=0;i<3;i++){
      int a;
      cin >> a;
      vtr.push_back(a);
    }
    vector<vector<int> > ans = subset(vtr);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << ans[i][j] << " ";
        }
    }
}