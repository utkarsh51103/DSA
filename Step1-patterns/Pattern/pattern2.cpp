#include<iostream>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<(2*n-(2*i+1));j++){
           cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print1(int n){
    for(int i=0;i<=2*n-1;i++){
        int star = i;
        if(i >n){star = 2*n-i;}
        for(int j=0;j<star ;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n){
    int s  = 1;

    for (int i=0;i<n;i++){
        if(i%2==0) s = 1;
        else s = 0;
        for(int j=0;j<=i;j++){
            cout << s;
            s = 1-s;
        }
        cout << endl;
    }
}
void print3(int n){
    int space = 2*(n-1);
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int j=0;j<space;j++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void print4(int n){
    int s=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << s << " ";
            s++;
        }cout << endl;
    }
}
void print5(int n){
     for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<=i;j++){
            cout << ch << " ";
            ch += 1;
        }cout << endl;
     }

}
void print6(int n){
     for(int i=0;i<n;i++){
        
        for(char ch = 'A';ch < 'A' + (n-i);ch++){
            cout << ch << " ";
        }cout << endl;
     }

}
void print7(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}
void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j < n-i-1;j++){
            cout << " ";
        }

        char ch ='A';
        int breakpoint =(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            
            cout << ch ;
            if(j<=breakpoint)ch++;     
            else ch--;
        }
        for(int j=0;j < n-i-1;j++){
            cout << " ";
        }
      
    
      cout << endl;
  }
}
void print9(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'E'-i;ch<='E';ch++){
                 cout << ch ;
        }cout << endl;
    }
}
void print10(int n){
    int inis = 0;
    for(int i=0;i<n;i++){
        for(int j =0;j<n-i;j++){
            cout << "*";
        }
        for(int j=0 ; j<=inis;j++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++){
            cout << "*";
        }cout << endl;
        inis +=2;
    }
    inis = (n-1)*2;
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout << "*";
        }
        for(int j=0 ; j<=inis;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }cout << endl;
        inis -=2;
    }
}
int main(){
    int n=5;
    print10(n);
}