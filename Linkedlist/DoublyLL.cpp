#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "deleted node with data"<< endl;
    }    

};

void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
         cout << temp -> data << " ";
         temp = temp -> next;
    }
    cout << endl;
}

int getlength(Node* head){
   int len =0;
   Node* temp = head;

   while(temp != NULL){
    len++;
    temp = temp -> next;
   }
   return len;
}

void insertathead(Node* &head,Node* &tail,int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp ->next = head;
    head -> prev = temp;
    head = temp;
    }
}

void insertatTail(Node* &head,Node* &tail,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    }
}

void insertatposition(Node* &head,Node* &tail,int d, int position){
    
    if(position == 1){
        insertathead(head,tail,d);
        return;
    }
    Node* temp = head;
    int count =1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    if(temp-> next == NULL){
        insertatTail(head,tail,d);
        return;
    }
     Node* nodetoinsert = new Node(d);
     nodetoinsert -> next = temp -> next;
     temp -> next -> prev = nodetoinsert;
     temp -> next = nodetoinsert;
     nodetoinsert -> prev = temp;
}

void deletenode(Node* &head,int position){
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;

    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        curr -> prev =  NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

int main(){
     Node* node1 = new Node(10);
     Node* head = node1;
     Node* tail = node1;

     print(head);
     insertatTail(head,tail,20);
     print(head);
     insertatTail(head,tail,30);
     print(head);
     insertatTail(head,tail,40);
     print(head);
     insertatTail(head,tail,50);
     print(head);
     insertatposition(head,tail,2,3);
     print(head);
     deletenode(head,2);
     print(head);

     return 0 ;
}