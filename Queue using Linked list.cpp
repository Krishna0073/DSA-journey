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
Node* front=nullptr;
Node* rear=nullptr;
void equeue(int val){
	Node* newnode=new Node(val);
	if(front==nullptr){
		front=newnode;
		rear=newnode;
		return;
	}
	rear->next=newnode;
	rear=newnode;
	
}
void dqueue(){
	if(front==nullptr){
		return;
	}
	Node* temp=front;
	front=front->next;
	delete temp;
	if(front==nullptr){
		rear=nullptr;
	}
	
}
void display(){
	if(front==nullptr){
		cout<<"Empty";
		return;
	}
	Node* temp=front;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}cout<<endl;
}
int main(){
	equeue(10);
	equeue(20);
	equeue(30);
	equeue(40);
	display();
	dqueue();
	display();
	return 0;
}
