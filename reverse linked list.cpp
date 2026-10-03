#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};

Node* head=nullptr;

void reverse(){
    Node* prev=nullptr;
    Node* current=head;
    Node* Next=nullptr;

    while(current!=nullptr){
        Next=current->next;
        current->next=prev;
        prev=current;
        current=Next;
    }

    head=prev;
}

int main(){
    Node* n1=new Node(10);
    Node* n2=new Node(20);
    Node* n3=new Node(30);

    n1->next=n2;
    n2->next=n3;

    head=n1;

    Node* temp=head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;

    reverse();

    Node* t2=head;

    while(t2!=nullptr){
        cout<<t2->data<<" ";
        t2=t2->next;
    }

    return 0;
}
