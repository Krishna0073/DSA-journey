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
void insertatstart(Node** head,int val){
	Node* temp=new Node(val);
	temp->next=*head;
	*head=temp;
}
void insertatend(Node** head,int val){
	Node* temp=*head;
	Node* newnode=new Node(val);
	if(temp==nullptr){
		*head=newnode;
		return;
	}
	while(temp->next!=nullptr){
		temp=temp->next;
	}
	temp->next=newnode;
	
}
void printll(Node** head){
	Node* temp= *head;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	insertatstart(&head,10);
	insertatend(&head,20);
	insertatend(&head,30);
	printll(&head);
}
