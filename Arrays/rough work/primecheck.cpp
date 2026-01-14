#include<iostream>
using namespace std;

 int main(){
     int n;
     cin >> n;
     if(n<=1){
      cout << "Not Prime Number" << endl; 
     }else if(n==2){
        cout << "Prime Number" << endl;
     }else if(n%2==0){
        cout << "Not Prime Number" << endl;
     }

     for(int i =3; i*i<=n;i+=2){
          if(n%i==0){
            cout << "Not a Prime Number" << endl;
            return 0 ;
          }
     }

    cout << "Prime Number" << endl;

 }