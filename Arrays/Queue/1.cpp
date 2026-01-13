#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {-2,1,3,-1,2};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==0){
                return 1;
            }
        }
    }
    return 0;
} 