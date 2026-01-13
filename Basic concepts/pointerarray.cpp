#include<iostream>
using namespace std;
 
  void print(int *p){
    *p=*p+1;
  }

 int main(){
    // int arr[10]={1,2,3,4,5,6,10,8,9,10};
    // int *p = &arr[0];
    // cout << sizeof(p)<<endl;
    // // cout << *(arr+6);
    // cout << sizeof(arr)<<endl;
    // cout << sizeof(&arr)<<endl;
    // cout << sizeof(&(*arr))<<endl;
    // cout << sizeof(*arr)<<endl;
    // char arr2[10] = {'a','b','c','d','e'};
    // cout << arr2;
    int p=5;
    int *r =&p;
    cout<< "before"<<*r<<endl;
    cout << "before" << r<<endl;
    print(r);
    cout<< "after"<<r<<endl;
     
 }