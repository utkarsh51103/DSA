#include<iostream>
using namespace std;
  
   char* reverseName(char name[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
     return name;
   }
   int numberOfwords(char name[]){
    int count =0;
    for(int i=0;name[i] !='\0';i++){
        count++;
    }
    return count;
   }
 int main(){
    char name[20];
    cout << "Enter you name -> ";
    cin >> name;
    int size = numberOfwords(name);

    cout << "Reversed name is -> " << reverseName(name,size) << endl;
 }