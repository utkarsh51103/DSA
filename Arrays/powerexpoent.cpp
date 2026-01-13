#include <iostream>
using namespace std;

void solve(int a,int b,int& ans){
       if(b==0)return;
       if(b%2==1){
        ans*=a;
       }
       solve(a*a,b/2,ans);
}

int main()
{
    int a,b;
    cin>>a>>b;
    int ans = 1;
    solve(a,b,ans);
    cout << ans;
}