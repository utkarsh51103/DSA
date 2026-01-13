//maxi element in the string
#include<iostream>
using namespace std;
 
  char maxiOcc(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char c= s[i];
        int number=0;
        number= c - 'a';
        arr[number]++;
    }
    int max=-1,ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            ans=i;
            max = arr[i];
        }
    }
    char finalAns = ans+'a';
    return finalAns;
  }
 
 int main(){
    string s;
    cin >> s;
    cout << maxiOcc(s)<<endl;
 }