#include<iostream>
using namespace std;

    
   int main(){
    vector<vector<int> > vec;
    for(int i=0;i<3;i++){
        vector<int> temp;
        for(int j=0;j<3;j++){
            int a;
            cin >> a;
            temp.push_back(a);
        }
        vec.push_back(temp);
        temp.clear();
    }
    cout << vec[2].size() <<endl;
   }