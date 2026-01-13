#include<iostream>
using namespace std;

class student{
    private:
    int age ;
    int height;

    public:
    int getage(){
        return this-> age;
    }
    void setage(int value){
        this->age = value;
    }
};


int main(){

  student utkarsh;

  utkarsh.setage(19);
  cout << utkarsh.getage() << endl;


}