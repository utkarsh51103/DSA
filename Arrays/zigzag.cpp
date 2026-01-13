#include <iostream>
using namespace std;

void zag(string& ans,string str,int n){
    if(n==1){
        ans =  str;
        return;
    }

    string arr[n];
    bool down = true;
    int row=0;

    for(int i=0;i<str.length();i++){
        arr[row].push_back(str[i]);
        if(row==n-1){
            down = false;
        }
        if(row==0){
            down = true;
        }
        down ? row++ : row--; 
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<size;i++){
          for(int j=0;j<arr[i].size();j++){
                ans.push_back(arr[i][j]);
          }
    }
}

int main()
{
    string str="";
    cin >> str;
    int n;
    cin >> n;
    string zigzag="";
    zag(zigzag,str,n);
    cout << zigzag<<endl;
    return 0;
}