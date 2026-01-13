#include <iostream>
using namespace std;

class nQueue{
    public:
      
        int n;
        int k;
        int *front;
        int *rear;
        int *arr;
        int *next;
        int freeSpot;

        nQueue(int n, int k){
            this -> n = n;
            this -> k = k;
            arr = new int[n];
            front = new int[k];
            rear = new int[k];

            for(int i = 0; i < k; i++) {
                front[i] = -1;
                rear[i] = -1;
            }

            next = new int[n];

            for(int i=0;i<n-1;i++){
                next[i] = i+1;
            }
            next[n-1]=-1;
            freeSpot=0;
        }

        void enQueue(int x, int qn){
            if(freeSpot == -1){
                cout << "Queue is full" << endl;
                return;
            }

            int index= freeSpot;
            freeSpot = next[freeSpot];
            
            if(front[qn-1]==-1){
                front[qn-1]=index;
            }else{
                next[rear[qn-1]] = index;
            }
            next[index]= -1;
            rear[qn-1]=index;
            arr[index]=x;
        }

        int deQueue(int qn){
            if(front[qn-1]==-1){
                cout << "Queue is empty" << endl;
                return -1;
            }
            int index = front[qn-1];
            front[qn-1] = next[index];
            next[index] = freeSpot;
            freeSpot = index;
            return arr[index];
        }

};

int main()
{
    nQueue q(10,3);
    q.enQueue(10,1);
    q.enQueue(20,1);
    q.enQueue(30,2);
    q.enQueue(40,2);
    cout << q.deQueue(1) << endl;
    cout << q.deQueue(2) << endl;
    cout << q.deQueue(1) << endl;
    cout << q.deQueue(2) << endl;
    cout << q.deQueue(2) << endl;
    return 0;
}