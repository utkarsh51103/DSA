#include<iostream>
using namespace std;

   vector<vector<int> > setZeroes(vector<vector<int> > matrix) {
        vector<vector<bool> > isTrue(false);
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<n;k++){
                        isTrue[k][j]=true;
                    }
                    for(int k=0;k<m;k++){
                        isTrue[i][k]=true;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isTrue[i][j]){
                    matrix[i][j]=0;
                }
            }
        }
        return matrix;
    }

 int main(){
    vector<vector<int> > vector;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int a;
            cin >> a;
            vector[i][j]=a;
        }
    }
       vector = setZeroes(vector);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << vector[i][j] << " ";
        }
        cout << endl;
    }
 }