#include<iostream>
using namespace std;
 
  char toLowercase(char c){
    if(c>='a' && c<='z'){
        return c;
    }
    else{
        c = c-'A'+'a';
    }
    return c;
  }
 bool palindrone(char name[],int size){
    int s=0,e=size-1;
    while(s<e){
        if(toLowercase(name[s])!=toLowercase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
     }
    return 1;

 }
  int main(){
    char name[20];
    cout << "Enter the name"<< endl;
    cin >> name;
    int count =0;
    for(int i=0;name[i]!='\0';i++){
         count++;
    }
    cout << "Palindrone or not -> " << palindrone(name,count)<< endl;
     
    }