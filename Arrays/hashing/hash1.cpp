#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[25] = {1,1,1,1,2,2,2,2,3,3,3,3,3,4,4,4,4,4,4,5,5,5,5,5};
    unordered_map<int, int> hash;
    for(int i=0;i<25;i++){
        hash[arr[i]]++;
    }
    for(auto i : hash){
        cout << i.first << " -> " << i.second << endl;
    }
    return 0;
}