#include<iostream>
using namespace std;

void reverseArray(string& arr, int left, int right){
    if(left>=right){
        return;
    }
    swap(arr[left], arr[right]);
    reverseArray(arr, left+1, right-1);
}

int main(){
   string arr;
   cin >> arr;
   int n = arr.length();
   string original = arr;
   reverseArray(arr, 0, n-1);
   
   if(original == arr){
    cout << "Palindrome" << endl;
   }else{
    cout << "Not a Palindrome" << endl;
}
}