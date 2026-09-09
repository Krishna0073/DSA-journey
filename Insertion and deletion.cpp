#include<iostream>
using namespace std;
struct Node{
	int data;
	Node * next;
	Node(int val){
		data=val;
		next=nullptr;
	}
};

int main(){
	Node* n1 = new Node(10);
	Node* n2 = new Node(20);
	Node* n3 = new Node(30);
	n1->next=n2;
	n2->next=n3;
	//insertion
	Node* n4=new Node(15);
	n4->next=n2;
	n1->next=n4;
		Node* head=n1;
	Node * temp=head;
		while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
	//deletion
	n4->next=n2->next;
	delete n2;
	temp=head;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
