#include<iostream>
using namespace std;

 int main(){
    vector<vector<int> > matrix;
    int a;
    for(int z = 0;z<3;z++){
        vector<int> temp;
        for(int x=0;x<3;x++){
            cin >> a;
            temp.push_back(a);
        }
        matrix.push_back(temp);
    }
    int row=matrix.size();
	int col =matrix[0].size();
     vector<vector<bool> > isZero(row,vector<bool>(col));
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                for(int k=0;k<row;k++){
                    isZero[k][j]=true;
                }
                for(int j=0;j<col;j++){
                    isZero[i][j]=true;
                }
            }
        }
     }

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(isZero[i][j]){
                matrix[i][j]=0;
            }
        }
     }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }


 }