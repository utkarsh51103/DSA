#include<iostream>
using namespace std;

   void solve(string digit,int index,string output,string padding[],vector<string>& ans){
              if(index>=digit.length()){
                ans.push_back(output);
                return;
              }
              int number = digit[index]-'0';
              string cha = padding[number];
              for(int i=0;i<cha.length();i++){
                output.push_back(cha[i]);
                solve(digit,index+1,output,padding,ans);
                output.pop_back();
              }

   }

   vector<string> keypad(string digit){
    vector<string> ans;
    string output="";
    int index = 0;
    string padding[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit,index,output,padding,ans);
    return ans;
   }

 int main(){
    string digit;
    cin >> digit;
    vector<string> ans = keypad(digit);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }cout << endl;
 }