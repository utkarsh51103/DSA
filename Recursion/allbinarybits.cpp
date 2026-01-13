#include <iostream>
using namespace std;

void generateAllString(char str[],int size, int n){
    if(size==n){
        str[n] = '\0';
        cout << str << endl;
        return;
    }

    if(str[n-1]=='1'){
        str[n]='0';
        generateAllString(str,size,n+1);
    }
    if(str[n-1]=='0'){
       str[n]='0';
       generateAllString(str,size,n+1);
       str[n]='1';
       generateAllString(str,size,n+1);
    }
}

void printallBinary(int k){
    if(k<=0){
        return;
    }
    char str[k+1];
    str[0]='1';
    generateAllString(str,k,1);
    str[0]='0';
    generateAllString(str,k,1);
}
int main()
{
    int k=3;
    printallBinary(k);
    return 0;
}