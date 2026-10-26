#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node* head=nullptr;
void insert_Node(int val){
    Node* newnode=new Node(val);
   newnode->next=head;
    head=newnode;
}
void display_all_nodes(){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertatbeg(int val){
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}
void insertatend(int val){
    Node* newnode=new Node(val);
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}
void findmiddle(){
    Node* t1=head;
    int c=0;
    while(t1!=nullptr){
        c++;
        t1=t1->next;
    }
    Node* t2=head;
    for(int i=0;i<c/2;i++){
        t2=t2->next;
    }
    cout<<"Middle element is: "<<t2->data<<endl;
}
void insertatmiddle(int val){
    Node* t1=head;
    int c=0;
    while(t1!=nullptr){
        c++;
        t1=t1->next;
    }
    Node* t2=head;
    int mid=(c+1)/2;
    for(int i=1;i<mid;i++){
        t2=t2->next;
    }
    Node* newnode=new Node(val);
  newnode->next=t2->next;
    t2->next=newnode;
}
int count(){
    int c=0;
    Node* temp=head;
    while(temp!=nullptr){
        c++;
        temp=temp->next;
    }
    return c;
}
void getNth(int k){
	Node* temp=head;
	for(int i=1;i<k;i++){
		temp=temp->next;
	}
	cout<<k<<"th value: "<<temp->data<<endl;
}
void insertatpos(int k,int val){
	Node* newnode=new Node(val);
	Node* temp=head;
	for(int i=1;i<k-1;i++){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void deleteatbeg(){
	if(head==nullptr){
		return;
	}
	else if(head->next==nullptr){
		delete head;
		head=nullptr;
		return;
	}
	Node* temp=head;
	head=head->next;
	delete temp;
}
void deleteatmiddle(){
	Node* t1=head;
	int c=0;
	while(t1!=nullptr){
		c++;
		t1=t1->next;
	}
	Node* t2=head;
	int mid=c/2;
	for(int i=1;i<mid;i++){
		t2=t2->next;
	}
	Node* del=t2->next;
	t2->next=t2->next->next;
	delete del;
}
void deleteatend(){
    if(head==nullptr){
        return;
    }
    else if(head->next==nullptr){
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
void deleteatpos(int k){
    if(k==1){
        deleteatbeg();
        return;
    }
    Node* temp=head;
    for(int i=1;i<k-1;i++){
        temp=temp->next;
    }
    Node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}
int main(){
  
    insert_Node(1); 
    insert_Node(3); 
    insert_Node(5); 
    insert_Node(7); 
    insert_Node(9); 
    insertatend(18);
    insert_Node(11); 
    insertatbeg(0);
    display_all_nodes();
    cout<<"Total numbers in list: "<<count()<<endl;
    findmiddle();
    insertatmiddle(14);
    display_all_nodes();
    findmiddle();
    getNth(3);
    insertatpos(4, 20);
    display_all_nodes();
    deleteatbeg();
    display_all_nodes();
    deleteatmiddle();
    display_all_nodes();
    deleteatend();
    display_all_nodes();
    deleteatpos(3);
    display_all_nodes();
}
