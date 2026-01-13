#include<iostream>
using namespace std;
 
    void solve(string str,int index, string output,vector<string>& ans, string mapping[]){
        if(index>=str.length()){
            ans.push_back(output);
            return;
        }
        int number = str[index] - '0';
        string chr = mapping[number];
        for(int i=0;i<chr.length();i++){
            output.push_back(chr[i]);
            solve(str,index+1,output,ans,mapping);
            output.pop_back();
        }
    }

  vector<string> keypad(string str){
    vector<string> ans;
    string output="";
    int index = 0;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(str,index,output,ans,mapping);
    return ans;
  }

 int main(){
    string str;
    cin >> str;
    vector<string> ans = keypad(str);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
 }