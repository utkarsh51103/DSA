#include<iostream>
using namespace std;

 int main(){
    vector<vector<int> > matrix; 
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
          matrix.push_back(j);
        }
    }
       int row= matrix.size();
        int n = row*row;
        int arr[n];
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
            arr[count]=matrix[i][j];
            count++;
            }
         }
         int cnt=0;
     for(int j=row-1;j>=0;j--){
         for(int i=0;i<n;i++){
             {
                 matrix[i][j]=arr[cnt];
                 cnt++;
             }
          }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                cout << matrix[i][j]<< " ";
            }
            cout << endl;
        }
 
    }
 