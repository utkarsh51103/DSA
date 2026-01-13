#include<iostream>
using namespace std;

class hero{
     int health;
     char level;

     public:
     int gethealth(){
        return health;
     }
     char getlevel(){
        return level;
     }
     void sethealth(int h){
        health = h;
     }
     void setlevel(char h){
        level = h;
     }
};

int main(){
    hero ramesh;

    ramesh.sethealth(70);
    ramesh.setlevel('A');
    cout << ramesh.gethealth() << endl;
    cout << ramesh.getlevel() << endl;
    cout << sizeof(ramesh)<< endl;
}