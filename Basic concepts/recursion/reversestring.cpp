#include<iostream>
using namespace std;
 
    void reverse(string& a,int i ,int e){
      if(i>e)
      return ;
      swap(a[i],a[e]);
      reverse(a,i+1,e-1);
    }

 int main(){
     string a = "Hello, World";
     reverse(a,0,a.length()-1);
     cout << a << endl;
 }

