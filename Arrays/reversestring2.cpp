#include<iostream> 
using namespace std;
   string reverse_string(string s){
   int n = s.length(),i =0 ;
   string ans ="";
        while(i<n){
            string temp="";
              while(s[i]==' ' && i<n){
                i++;
              }
              while(s[i]!=' '&& i<n){
                 temp+=s[i];
                 i++;
              }
              if(temp.size()>0){
                if(ans.size()==0){
                    ans= temp;
                }else{
                    ans= temp+" "+ans;
                }
              }
           }   return ans;
   }
   

   int main(){
    string s="";
    // cout << "Enter the string to be reversed ->"<< endl;
    // for(int i=0;i<5;i++){
    //     cin >> s;
    //     }
    cin >> s;
    cout << reverse_string(s) << endl;
   }