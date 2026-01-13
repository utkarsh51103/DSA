#include <iostream>
using namespace std;


class Stack{
    public:
        int top;
        int size;
        int *arr;

        Stack(int s){
            this->size = s;
            this->arr = new int[s];
            top = -1;
        }

        void push(int x){
            if(top < size){
                top++;
                arr[top] = x;
            }else{
                cout << "Stack OverFlow" << endl;
            }
        }

        void pop(){
            if(top>=0){
                top--;

            }else{
                cout<< "Stack underflow" <<endl;
            }
        }

        int peek(){
            if(top>=0){
                return arr[top];
            }
        }

        bool empty(){
            return top == -1 ? true : false;
        }
};
int main()
{
    Stack s(5);
    s.push(1);
    cout <<s.peek()<<endl;
    s.push(2);
    cout <<s.peek()<<endl;
    s.push(3);
    cout <<s.peek()<<endl;
    s.pop();
    cout << s.empty()<<endl;
    cout <<s.peek()<<endl;
    s.pop();
    cout <<s.peek()<<endl;
    s.pop();
    cout <<s.peek()<<endl;
    cout << s.empty() << endl;
    return 0;
}