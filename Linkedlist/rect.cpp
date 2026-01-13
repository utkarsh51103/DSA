// #include <iostream>
// using namespace std;

// void printPattern(int n) {
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
       
//             if (i == 0 || i == n-1 || j == 0 || j == n-1 || 
//                 (i == 2 && j > 1 && j < n-2) || (i == n-3 && j > 1 && j < n-2) || 
//                 (j == 2 && i > 1 && i < n-2) || (j == n-3 && i > 1 && i < n-2) ||
//                 (i == 4 && j > 3 && j < n-4) || (i == n-5 && j > 3 && j < n-4) || 
//                 (j == 4 && i > 3 && i < n-4) || (j == n-5 && i > 3 && i < n-4)) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     printPattern(n);
//     return 0;
// }


#include <iostream>
#include <vector> // Include the vector header file
using namespace std;

int main()
{
    vector<vector<int> > copy (3, vector<int>(3,1));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << copy[i][j] << " ";
        }
        cout << endl;
    }
}