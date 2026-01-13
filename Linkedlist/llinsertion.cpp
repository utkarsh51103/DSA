#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;

    node(int data){
        this-> data = data;
        this-> next = NULL;
    }

    ~node(){
        int temp = this->data;
        if(this-> next != NULL){
           delete next;
           this -> next = NULL;
        }
        cout << "Memory is free for node with data "<< temp << endl;
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

void insertAtPosition(node* &head,node* &tail, int d, int position){
      
      if(position == 1){
        insertAtHead(head, d);
        return;
      }
      
      node* temp = head;
      int count = 1;
      
      while(count < position -1){
        temp = temp -> next;
        count++;
      }
      if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
      }

      node* nodeToInsert = new node(d);
      nodeToInsert -> next = temp -> next;
      temp -> next = nodeToInsert;
    
}

void deleteNode(node* &head, int position){
    if(position == 1){
        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* prev = NULL;
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        prev -> next =  curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void printLindkedList(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data<<" ";
        temp = temp -> next;
    }
    cout << endl;
}

node* reverse(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* forward  = NULL;

    while(curr!= NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        }
        return prev;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1; 
    printLindkedList(head);

    insertAtTail(tail, 30);
    printLindkedList(head);

    insertAtTail(tail, 40);
    printLindkedList(head);

    insertAtPosition(head,tail, 5, 2);
    printLindkedList(head);

    // cout << "head " << head -> data << endl;
    // cout << "tail " << tail -> data << endl;

    // deleteNode(head, 1);
    // printLindkedList(head);

    // deleteNode(head, 2);
    // printLindkedList(head);

    head = reverse(head);
    printLindkedList(head);
}
