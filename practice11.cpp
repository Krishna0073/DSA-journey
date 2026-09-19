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
Node* start=nullptr;
void insertatfirst(int val){
	Node* temp=new Node(val);
	temp->next=start;
	start=temp;
}
void insertatend(int val){
Node* newnode= new Node(val);	
	if(start==nullptr){
		start=newnode;
		return;
	} Node* temp=start;
	while(temp->next!=0){
		temp=temp->next;
	}
	temp->next=newnode;
	
}
void insertatpos(int pos,int val){
	Node* newnode=new Node(val);
	if(pos==1){
		start=newnode;
		return;
	}	if(start==nullptr){
		return;
	}
	Node* temp=start;
	for(int i=1;i<pos-1;i++){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void deleteatfirst(){
	if(start==nullptr){
		return;
	}Node* temp=start;
	start=start->next;
	delete temp;
}
void deleteatend(){
	if(start==nullptr){
		return;
	}
	if(start->next==nullptr){
		delete start;
		start->next=nullptr;
	}
	Node* temp=start;
	while(temp->next!=nullptr){
		temp=temp->next;
	}
	delete temp;
	temp->next=nullptr;
}
void printLL(){
	Node* temp= start;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	insertatfirst(10);
	insertatend(20);
	insertatend(30);
	insertatpos(2,40);
	deleteatfirst();
	deleteatend;
	printLL();
}
