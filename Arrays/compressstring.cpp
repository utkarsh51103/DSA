#include<iostream>
using namespace std;

int compress(vector<char>& chars) {
        int i=0;
        int ans=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ans++]=chars[i];
            int count = j-i;
            if(count>1){
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[ans++]=ch;
                }
            }
            i=j;
        }return ans;
    }

 int main(){
    vector<char> chars;
    chars.push_back('a');
    chars.push_back('a');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('c');
    chars.push_back('c');
    chars.push_back('c');
    chars.push_back('d');
   cout << compress(chars);
 }