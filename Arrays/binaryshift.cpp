#include <iostream>
using namespace std;

int decimalshift(int n,int m){
    if(n==0){
        return 0;
    }

    string binary = "";
    while(n>0){
       int digit = n%2;
       binary = to_string(digit) + binary;
       n/=2; 
    }
    int count=0;
    string str = to_string(m);

    for(int i=0;i<str.length();i++){
        if(str[i]!=binary[i]){
            count++;
        }
    }
    return count;

}

int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    int i = decimalshift(n,m);
    cout << "No. of Shift Requiered = " << i << endl;
    return 0;
}