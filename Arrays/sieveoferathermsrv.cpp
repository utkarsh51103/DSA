#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int prime[n+1];
    memset(prime,1,sizeof(prime));
    for(int i=2;i<n+1;i++){
        if(prime[i]){
            for(int j=i*i;j<n+1;j+=i){
                prime[j]=0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        if(prime[i])cout << i << " ";
    }
    return 0;
}