#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int val){
		data=val;
		next = nullptr;
	}
};
Node* head=nullptr;
void insertatfirst(int val){
	Node* newnode=new Node(val);
		newnode->next=head;
		head=newnode;
	}
void insertatend(int val){
	Node* newnode=new Node(val);
	if(head==nullptr){
	head=newnode;
	return;
	}
	Node* temp=head;
	while(temp->next!=nullptr){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void changeorder() {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;     

    while (even != nullptr && even->next != nullptr) {
        odd->next = even->next;     
        odd = odd->next;

        even->next = odd->next;     
        even = even->next;
    }

    odd->next = evenHead;           
}
void display(){
	Node* temp=head;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	insertatfirst(10);
	insertatfirst(20);
	insertatfirst(30);
	insertatend(50);
	insertatend(40);
	display();
	changeorder();
	display();
	}
