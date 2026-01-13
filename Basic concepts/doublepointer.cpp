#include<iostream>
using namespace std;

  void update(int **p2){
    // p2=p2+1; //no change

    // *p2= *p2 +1;

    **p2 = **p2 +1;
  }

 int main(){
    int i=5;
    int *p = &i;
    int **p2 =&p;
    cout << "before ->"<<endl<<i<<endl;
    cout << p <<endl;
    cout << p2 << endl;
    update(p2);
    cout << "after ->"<<endl<<i<<endl;
    cout << *p<<endl;
    cout << *p2<<endl; 
 }  