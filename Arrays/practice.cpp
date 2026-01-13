#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "Constructor called\n";
    }
    void run(){
        cout << "A running\n";
    }
    ~A(){
        cout << "Destructor called\n";
    }
};

class B : public A{
    public:
    B(){
        cout << "Constructor B called\n";
    }
    virtual void run(){
        cout << "Run B called\n";
    }
    ~B(){
        cout << "Destructor B called\n";
    }
};

int main()
{
     int a=0;
     int ans=0;

     switch(a){
        case 0:
            a++;
        case 1:
        a++;
        case 2:
        a++;
        break;
        case 3:
        a++;
        break;
        default:
        ans++;
     }
     cout << a << ans;
    
}