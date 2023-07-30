#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int value){
        data=value;
        prev=NULL;
        next=NULL;
    }
};


Node* head=NULL;
Node* tail=NULL;

void insertFirstElement(int value){
    Node* n=new Node(value);

    head=n;
    tail=n;
}

void insertAtHead(int value){
    if(head==NULL){
        insertFirstElement(value);
    }

    Node* n=new Node(value);
    n->next=head;
    head->prev=n;
    head=n;
}

void insertAtTail(int value){
    if(head==NULL){
        insertAtHead(value);
    }

    Node* n=new Node(value);
    tail->next=n;
    n->prev=tail;
    tail=n;
}

void Display(){
    Node* temp=head;
    cout<<"NULL<-->";
    while(temp!=NULL){
        cout<<temp->data<<"<-->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}


void reverse(){
    Node* p=NULL;
    Node* c=head;
    Node* n;

    while(c!=NULL){
        n=c->next;
        c->next=p;
        c->prev=n;
        p=c;
        c=n;
    }

    Node* temp=head;
    head=tail;
    tail=temp;
    
}

int main(){
    insertFirstElement(10);
    insertAtHead(5);
    insertAtTail(15);
    Display();

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    // cout<<head->next->prev->data<<endl;

    reverse();
    Display();

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    cout<<head->next->prev->data<<endl;


}