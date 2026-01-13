#include<iostream>                                     
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
};

void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp -> next = head;
    temp = head  ;
}


void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = tail -> next;

}

void printLindkedList(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data<<" ";
        temp = temp -> next;
    }
    cout << endl;
}

node* getmiddle(node* head){
    node* slow=head;
    node* fast=head->next;

    if(head == NULL || head->next == NULL){
        return head;
    }
    if(head->next->next == NULL){
        return head->next;
    }

    while(fast!=NULL){
          fast = fast->next;
          if(fast!=NULL){
            fast=fast->next;
          }
          slow=slow->next;  
    }
    return slow;
}

 int main(){
     node* newnode =new node(10);
     node* head = newnode;
     node* tail = newnode;
     insertAtTail(tail,70);
    //  printLindkedList(head);

     insertAtTail(tail,90);
    //  printLindkedList(head);

     insertAtTail(tail, 30);
    // printLindkedList(head);

    insertAtTail(tail, 40);
    printLindkedList(head);

    cout << getmiddle(head)->data << endl;


 }