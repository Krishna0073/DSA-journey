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
void deleteatfirst(Node** head){
	 if(*head == nullptr){
        return;
    }
	Node* temp=*head;
	*head=(*head)->next;
	delete temp;
}
void deleteatend(Node** head){
    if(*head == nullptr){
        return;
    }

    if((*head)->next == nullptr){
        delete *head;
        *head = nullptr;
        return;
    }

    Node* temp = *head;

    while(temp->next->next != nullptr){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}
void printll(){
	Node* temp= head;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
//Node*  ? I only need to access/traverse the list
//Node** ? I need the function to modify the actual head 
int main(){
	insertatstart(&head,10);
	insertatend(&head,20);
	insertatend(&head,30);
	printll();
	deleteatfirst(&head);
	cout<<endl;
	printll();
	deleteatend(&head);
	cout<<endl;
	printll();
}
