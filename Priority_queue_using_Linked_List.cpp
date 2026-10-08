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
void insert(int val){
	Node* newnode=new Node(val);
	if(head==nullptr || head->data> val){
		newnode->next=head;
		head=newnode;
		return;
	}
	Node* temp=head;
	while(temp->next!=nullptr && temp->next->data<val){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void deletepq(){
	if(head==nullptr){
		return;
	}
	if(head->next==nullptr){
		delete head;
		head=nullptr;
		return;
	}
	Node* temp=head;
	while(temp->next->next!=nullptr){
		temp=temp->next;
	}
	delete temp->next;
	temp->next=nullptr;
}
void display(){
	if(head==nullptr){
		cout<<"Empty"<<endl;
		return;
	}
	Node* temp=head;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	insert(50);
	insert(39);
	insert(8);
	insert(22);
	display();
	deletepq();
	display();
	
}
