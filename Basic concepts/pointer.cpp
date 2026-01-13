#include<iostream>
using namespace std;
 
  int main(){
    // int a=5;
    // int *b=&a;
    // cout << b << endl;
    // cout << *b;

    int a=5;
    int *b= &a;
    // cout << a<<endl;
    int *q = b;
    cout << b << " " << endl;
    cout << q << endl;
  }
