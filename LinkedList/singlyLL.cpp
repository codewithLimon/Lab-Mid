#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

Node* head=NULL;
Node* tail=NULL;



void insertFirstElement(int value){
    head=new Node(value);
    tail=head;
}

void insertAtHead(int value){
    Node* n=new Node(value);

    n->next=head;
    head=head->next;
}

void insertLast(int value){
    if(head==NULL){
        insertFirstElement(value);
        return;
    }

    Node* newNode=new Node(value);
    tail->next=newNode;
    tail=newNode;
}



void checkPalindrome(){
    Node* second=NULL;

    Node* temp=head;

    while(temp!=NULL){

    }
}

void reverse(){
    Node* p=NULL;
    Node* c=head;
    Node* n;

    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }

    Node* temp=head;
    head=tail;
    tail=temp;
}

bool checkPalindrome(Node* start){
    Node* temp=head;
    Node* temp2=start;

    while(temp!=NULL && temp2!=NULL){
        if(temp->data!=temp2->data){
            return false;
        }

        temp=temp->next;
        temp2=temp2->next;
    }

    return true;
}
Node* linearSearch(int value){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==value){
            return temp;
        } 

        temp=temp->next;
    }

    return NULL;
}
void insertAfter(int value, int after){
    Node* temp=linearSearch(after);
    if(temp!=NULL){
        Node* n=new Node(value);

        n->next=temp->next;
        temp->next=n;

        if(temp==tail){
            tail=n;
        }
    }
}


void insertBefore(int value, int before){
    Node* temp=linearSearch(before);
    if(temp!=NULL){
        if(temp==head){
            insertAtHead(value);
        }


        Node* iterator=head;


        while(iterator->next!=temp){
            iterator=iterator->next;
        }

        Node* n=new Node(value);
        n->next=temp;
        iterator->next=n;

    }
}


void Display(){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}
void Display2(Node* LL){
    Node* temp=LL;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}

void deleteHead(){
    if(head==NULL){
        return;
    }

    Node* temp=head;
    head=head->next;
    delete temp;
}

void deleteTail(){
    if(head==NULL){
        return;
    }else if(head==tail){
        deleteHead();
    }else{
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        temp->next=NULL;
        tail=temp;

    }
}
// 1->2->3

int main(){
    Display();
    insertFirstElement(1);
    insertLast(0);
    insertLast(2);
    insertLast(500);
    Display();

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    // deleteHead();
    // Display();

    // cout<<"Head: "<<head->data<<endl;
    // cout<<"Tail: "<<tail->data<<endl;

    // deleteTail();
    // Display();

    // cout<<"Head: "<<head->data<<endl;
    // cout<<"Tail: "<<tail->data<<endl;

    // insertAfter(11,2);
    // Display();

    // cout<<"Head: "<<head->data<<endl;
    // cout<<"Tail: "<<tail->data<<endl;

    insertBefore(99,2);
    Display();

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;


    // Node* second=head;
    // Display2(second);
    // reverse();
    // Display();
    // if(checkPalindrome(second)){
    //     cout<<"Palindrome"<<endl;
    // }else cout<<"Not a palindrome"<<endl;
}