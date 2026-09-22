#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int val){
		data=val;
		next= nullptr;
	}
};
Node* top=nullptr;
void push(int value){
	Node* newNode = new Node(value);
	newNode->next=top;
	top=newNode;
}
void pop(){
	if(top==nullptr){
		cout<<"Stack is empty";
		return;
	}
	top=top->next;
}
void peek(){
	if(top==nullptr){
		cout<<"Stack is empty";
		return;
	}
	cout<<top->data<<endl;
}
void display(){
	if(top==nullptr){
		cout<<"Stack is empty";
		return;
	}
	Node* temp=top;
	while(temp != nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}
int main(){
	cout<<"Push Operation"<<"\n";
	push(10);
	push(20);
	push(30);
	push(40);
	display();
	peek();
	pop();
	display();
}
