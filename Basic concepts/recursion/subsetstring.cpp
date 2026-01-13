#include<iostream>
using namespace std;
 
   void solve(string str,int index,string output,vector<string>& ans){
        if(index>=str.size()){
            ans.push_back(output);
            return;
        }
        solve(str,index+1,output,ans);
        char element = str[index];
        output.push_back(element);
        solve(str,index+1,output,ans);
       }

   vector<string> subseq(string str){
           vector<string> ans;
           string output = "";
           int index = 0;
           solve(str,index,output,ans);
           return ans;
   }

  int main(){
      string chr;
      cin >> chr;
      vector<string> ans = subseq(chr);
      for(int i=0;i<ans.size();i++){
        cout << ans[i] <<  " ";
      }cout << endl;

      
  }