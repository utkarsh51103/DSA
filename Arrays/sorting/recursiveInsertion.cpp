#include <iostream>
using namespace std;

void recurInsertion(vector<int> &arr,int n){
    if(n<=1){
        return;
    }

    recurInsertion(arr,n-1);

    
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    recurInsertion(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
