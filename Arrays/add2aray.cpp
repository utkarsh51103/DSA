//addition of 2 arrays
#include<iostream>
using namespace std;

 vector<int> addition(vector<int> arr1,vector<int> arr2,vector<int> arr3){
    int i=arr1.size()-1, j=arr2.size()-1;
    int sum=0;
    int carry=0;
    while(i>=0 && j>=0){
       sum = arr1[i]+arr2[j]+carry;
       carry = sum/10;
       sum = sum%10;
       i--;
       j--;
    arr3.push_back(sum);
   }
   while(i>=0){
       sum = arr1[i]+carry;
       carry = sum/10;
       sum = sum%10;
       i--; 
        arr3.push_back(sum);
    }
    while(j>=0){
       sum = arr2[j]+carry;
       carry = sum/10;
       sum = sum%10;
       j--;
        arr3.push_back(sum);
}
while(carry !=0){
       sum = carry;
       carry = sum/10;
       sum = sum%10;
       i--;
       j--; 
        arr3.push_back(sum);
   }
   return arr3;
 }
 vector<int> reverseVector(vector<int> arr3){
    int i=0;
    int e=arr3.size()-1;
    while(i<e){
        swap(arr3[i++],arr3[e--]);

    }
    return arr3;
 }
int main(){
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    arr1.push_back(6);
    arr1.push_back(7);
    arr1.push_back(6);
    arr1.push_back(9);
    arr2.push_back(5);
    arr2.push_back(8);
    arr2.push_back(9);
    arr2.push_back(7);

    vector<int> ans = addition(arr1,arr2,arr3);
    vector<int> arr4 = reverseVector(ans);
    for(int i=0;i<arr4.size();i++){
        cout << arr4.at(i) << " ";
    }
    cout << endl;
 }