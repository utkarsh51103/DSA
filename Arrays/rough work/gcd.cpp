#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    vector<int> ans;
    for(int i=1; i*i<=a; i++){
        if(a%i==0){
            ans.push_back(i);
            if( i != a/i ){
                ans.push_back(a/i);
            }
        }
    }
    cout << "Factors of " << a << " are: ";
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
