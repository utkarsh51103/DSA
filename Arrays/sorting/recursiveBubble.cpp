#include <iostream>
using namespace std;

void recurBubble(vector<int> &arr,int n){
    if(n==1){
        return;
    }

    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    recurBubble(arr,n-1);
}

int main()
{
    int n;
    cout << "Enter the size of array->";
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    recurBubble(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}