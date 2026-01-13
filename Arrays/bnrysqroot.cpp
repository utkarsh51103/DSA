#include<iostream>
using namespace std;

 long long int bnrysrch(int n){
    int s=0,e=n;
           long long int m = s+(e-s)/2;
            long long int ans=-1;
            while(s<=e){
                long long int sq=m*m;
                if(sq==n){
                    return m;
                }
                if(sq<n){
                    ans=m;
                    s=m+1;
                    
                }
                else{
                    e=m-1;
                }m = s+(e-s)/2;
            }return ans;
};
    int main(){
            int x;
            cout << "enter the numebnr to be rooted" << endl;
cin >> x;
        int ans = bnrysrch(x);
        cout << ans;
    }